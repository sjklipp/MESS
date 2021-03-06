

#ifndef KEY_HH
#define KEY_HH

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

#include "error.hh"

class Key {
  int _index;
  int _group;

  struct _Val : public std::string {
    mutable bool _init;
    _Val (const std::string& s) : std::string(s), _init(false) {}
  };

  static std::vector<std::vector<_Val> > _stack;

  static void _check_stack ();

  void        _check_range () const;
  void        _add_key     (const std::string&);

  Key(const Key&); // no copying
  Key& operator= (const Key&);

public:

  explicit Key (const std::string& s) { _add_key(s); }

  operator const std::string& () const;
  bool                 isinit () const;
  bool operator== (const std::string& s) const;
  bool operator!= (const std::string& s) const { return !(*this == s);}

  static bool check_uninitialized_keys (std::ostream&);
  static void        show_all          (std::ostream&, int =0);
  static std::string show_all          (int =0);

  friend class KeyGroup;
};

inline Key::operator const std::string&  () const
{
  _check_range();
  return _stack[_group][_index];
}

inline bool operator== (const std::string& s, const Key& k)
{ 
  return k == s; 
}

inline bool operator!= (const std::string& s, const Key& k)
{
  return !(k == s);
}

inline std::ostream& operator<< (std::ostream& to, const Key& k)
{ 
  return to << (const std::string&)k; 
}

class KeyGroup {

public:
  KeyGroup  () { Key::_stack.push_back(std::vector<Key::_Val>()); }
  ~KeyGroup () { Key::_stack.pop_back(); }
  
};

#endif

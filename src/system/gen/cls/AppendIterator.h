/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_AppendIterator_h34b70f7d__
#define __GENERATED_cls_AppendIterator_h34b70f7d__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/OuterIterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/iterator.php line 796 */
FORWARD_DECLARE_CLASS(AppendIterator);
extern const ObjectStaticCallbacks cw_AppendIterator;
class c_AppendIterator : public ExtObjectData {
  public:

  // Properties
  Variant m_iterators;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(AppendIterator, AppendIterator, ObjectData)
  static const ClassPropTable os_prop_table;
  c_AppendIterator(ObjectData* r = NULL) : m_iterators(Variant::nullInit) {
    setAttribute(HasCall);
  }
  Variant doCall(Variant v_name, Variant v_arguments, bool fatal);
  public: void t___construct();
  public: c_AppendIterator *create();
  public: void t_append(CVarRef v_it);
  public: Variant t_getinneriterator();
  public: void t_rewind();
  public: bool t_valid();
  public: Variant t_current();
  public: Variant t_key();
  public: void t_next();
  public: Variant t___call(Variant v_func, Variant v_params);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(append);
  DECLARE_METHOD_INVOKE_HELPERS(getinneriterator);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
  DECLARE_METHOD_INVOKE_HELPERS(valid);
  DECLARE_METHOD_INVOKE_HELPERS(current);
  DECLARE_METHOD_INVOKE_HELPERS(key);
  DECLARE_METHOD_INVOKE_HELPERS(next);
  DECLARE_METHOD_INVOKE_HELPERS(__call);
};
ObjectData *coo_AppendIterator() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_AppendIterator_h34b70f7d__


// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_portable_ObjectImpl__
#define __org_omg_CORBA_portable_ObjectImpl__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Context;
          class ContextList;
          class DomainManager;
          class ExceptionList;
          class NVList;
          class NamedValue;
          class ORB;
          class Object;
          class Policy;
          class Request;
          class SetOverrideType;
        namespace portable
        {
            class Delegate;
            class InputStream;
            class ObjectImpl;
            class OutputStream;
            class ServantObject;
        }
      }
    }
  }
}

class org::omg::CORBA::portable::ObjectImpl : public ::java::lang::Object
{

public:
  ObjectImpl();
  virtual ::org::omg::CORBA::Request * _create_request(::org::omg::CORBA::Context *, ::java::lang::String *, ::org::omg::CORBA::NVList *, ::org::omg::CORBA::NamedValue *, ::org::omg::CORBA::ExceptionList *, ::org::omg::CORBA::ContextList *);
  virtual ::org::omg::CORBA::Request * _create_request(::org::omg::CORBA::Context *, ::java::lang::String *, ::org::omg::CORBA::NVList *, ::org::omg::CORBA::NamedValue *);
  virtual ::org::omg::CORBA::Object * _duplicate();
  virtual ::org::omg::CORBA::portable::Delegate * _get_delegate();
  virtual JArray< ::org::omg::CORBA::DomainManager * > * _get_domain_managers();
  virtual ::org::omg::CORBA::Object * _get_interface_def();
  virtual ::org::omg::CORBA::Policy * _get_policy(jint);
  virtual JArray< ::java::lang::String * > * _ids() = 0;
  virtual jint _hash(jint);
  virtual ::org::omg::CORBA::portable::InputStream * _invoke(::org::omg::CORBA::portable::OutputStream *);
  virtual jboolean _is_a(::java::lang::String *);
  virtual jboolean _is_equivalent(::org::omg::CORBA::Object *);
  virtual jboolean _is_local();
  virtual jboolean _non_existent();
  virtual ::org::omg::CORBA::ORB * _orb();
  virtual void _release();
  virtual void _releaseReply(::org::omg::CORBA::portable::InputStream *);
  virtual ::org::omg::CORBA::Request * _request(::java::lang::String *);
  virtual ::org::omg::CORBA::portable::OutputStream * _request(::java::lang::String *, jboolean);
  virtual void _servant_postinvoke(::org::omg::CORBA::portable::ServantObject *);
  virtual ::org::omg::CORBA::portable::ServantObject * _servant_preinvoke(::java::lang::String *, ::java::lang::Class *);
  virtual void _set_delegate(::org::omg::CORBA::portable::Delegate *);
  virtual ::org::omg::CORBA::Object * _set_policy_override(JArray< ::org::omg::CORBA::Policy * > *, ::org::omg::CORBA::SetOverrideType *);
  virtual jboolean equals(::java::lang::Object *);
  virtual ::java::lang::String * toString();
public: // actually package-private
  ::org::omg::CORBA::portable::Delegate * __attribute__((aligned(__alignof__( ::java::lang::Object)))) delegate;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_portable_ObjectImpl__
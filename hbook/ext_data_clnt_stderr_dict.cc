// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME ext_data_clnt_stderr_dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "ext_data_clnt_stderr.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ext_data_clnt_stderr_Dictionary();
   static void ext_data_clnt_stderr_TClassManip(TClass*);
   static void *new_ext_data_clnt_stderr(void *p = 0);
   static void *newArray_ext_data_clnt_stderr(Long_t size, void *p);
   static void delete_ext_data_clnt_stderr(void *p);
   static void deleteArray_ext_data_clnt_stderr(void *p);
   static void destruct_ext_data_clnt_stderr(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ext_data_clnt_stderr*)
   {
      ::ext_data_clnt_stderr *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ext_data_clnt_stderr));
      static ::ROOT::TGenericClassInfo 
         instance("ext_data_clnt_stderr", "ext_data_clnt_stderr.hh", 33,
                  typeid(::ext_data_clnt_stderr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ext_data_clnt_stderr_Dictionary, isa_proxy, 0,
                  sizeof(::ext_data_clnt_stderr) );
      instance.SetNew(&new_ext_data_clnt_stderr);
      instance.SetNewArray(&newArray_ext_data_clnt_stderr);
      instance.SetDelete(&delete_ext_data_clnt_stderr);
      instance.SetDeleteArray(&deleteArray_ext_data_clnt_stderr);
      instance.SetDestructor(&destruct_ext_data_clnt_stderr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ext_data_clnt_stderr*)
   {
      return GenerateInitInstanceLocal((::ext_data_clnt_stderr*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ext_data_clnt_stderr*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ext_data_clnt_stderr_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ext_data_clnt_stderr*)0x0)->GetClass();
      ext_data_clnt_stderr_TClassManip(theClass);
   return theClass;
   }

   static void ext_data_clnt_stderr_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ext_data_clnt_stderr(void *p) {
      return  p ? new(p) ::ext_data_clnt_stderr : new ::ext_data_clnt_stderr;
   }
   static void *newArray_ext_data_clnt_stderr(Long_t nElements, void *p) {
      return p ? new(p) ::ext_data_clnt_stderr[nElements] : new ::ext_data_clnt_stderr[nElements];
   }
   // Wrapper around operator delete
   static void delete_ext_data_clnt_stderr(void *p) {
      delete ((::ext_data_clnt_stderr*)p);
   }
   static void deleteArray_ext_data_clnt_stderr(void *p) {
      delete [] ((::ext_data_clnt_stderr*)p);
   }
   static void destruct_ext_data_clnt_stderr(void *p) {
      typedef ::ext_data_clnt_stderr current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ext_data_clnt_stderr

namespace {
  void TriggerDictionaryInitialization_ext_data_clnt_stderr_dict_Impl() {
    static const char* headers[] = {
"ext_data_clnt_stderr.hh",
0
    };
    static const char* includePaths[] = {
"/cvmfs/eel.gsi.de/debian10-x86_64/root/624-04/include/",
"/u/jbormans/ucesb/hbook/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "ext_data_clnt_stderr_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$ext_data_clnt_stderr.hh")))  ext_data_clnt_stderr;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "ext_data_clnt_stderr_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ext_data_clnt_stderr.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ext_data_clnt_stderr", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ext_data_clnt_stderr_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ext_data_clnt_stderr_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ext_data_clnt_stderr_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ext_data_clnt_stderr_dict() {
  TriggerDictionaryInitialization_ext_data_clnt_stderr_dict_Impl();
}

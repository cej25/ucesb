// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME ext_data_clnt_dict
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
#include "ext_data_clnt.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ext_data_clnt_Dictionary();
   static void ext_data_clnt_TClassManip(TClass*);
   static void *new_ext_data_clnt(void *p = 0);
   static void *newArray_ext_data_clnt(Long_t size, void *p);
   static void delete_ext_data_clnt(void *p);
   static void deleteArray_ext_data_clnt(void *p);
   static void destruct_ext_data_clnt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ext_data_clnt*)
   {
      ::ext_data_clnt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ext_data_clnt));
      static ::ROOT::TGenericClassInfo 
         instance("ext_data_clnt", "ext_data_clnt.hh", 34,
                  typeid(::ext_data_clnt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ext_data_clnt_Dictionary, isa_proxy, 0,
                  sizeof(::ext_data_clnt) );
      instance.SetNew(&new_ext_data_clnt);
      instance.SetNewArray(&newArray_ext_data_clnt);
      instance.SetDelete(&delete_ext_data_clnt);
      instance.SetDeleteArray(&deleteArray_ext_data_clnt);
      instance.SetDestructor(&destruct_ext_data_clnt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ext_data_clnt*)
   {
      return GenerateInitInstanceLocal((::ext_data_clnt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ext_data_clnt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ext_data_clnt_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ext_data_clnt*)0x0)->GetClass();
      ext_data_clnt_TClassManip(theClass);
   return theClass;
   }

   static void ext_data_clnt_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ext_data_clnt(void *p) {
      return  p ? new(p) ::ext_data_clnt : new ::ext_data_clnt;
   }
   static void *newArray_ext_data_clnt(Long_t nElements, void *p) {
      return p ? new(p) ::ext_data_clnt[nElements] : new ::ext_data_clnt[nElements];
   }
   // Wrapper around operator delete
   static void delete_ext_data_clnt(void *p) {
      delete ((::ext_data_clnt*)p);
   }
   static void deleteArray_ext_data_clnt(void *p) {
      delete [] ((::ext_data_clnt*)p);
   }
   static void destruct_ext_data_clnt(void *p) {
      typedef ::ext_data_clnt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ext_data_clnt

namespace {
  void TriggerDictionaryInitialization_ext_data_clnt_dict_Impl() {
    static const char* headers[] = {
"ext_data_clnt.hh",
0
    };
    static const char* includePaths[] = {
"/cvmfs/eel.gsi.de/debian10-x86_64/root/624-04/include/",
"/u/jbormans/ucesb/hbook/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "ext_data_clnt_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$ext_data_clnt.hh")))  ext_data_clnt;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "ext_data_clnt_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ext_data_clnt.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ext_data_clnt", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ext_data_clnt_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ext_data_clnt_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ext_data_clnt_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ext_data_clnt_dict() {
  TriggerDictionaryInitialization_ext_data_clnt_dict_Impl();
}

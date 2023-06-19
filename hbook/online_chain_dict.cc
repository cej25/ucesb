// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME online_chain_dict
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
#include "online_chain.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *online_chain_Dictionary();
   static void online_chain_TClassManip(TClass*);
   static void *new_online_chain(void *p = 0);
   static void *newArray_online_chain(Long_t size, void *p);
   static void delete_online_chain(void *p);
   static void deleteArray_online_chain(void *p);
   static void destruct_online_chain(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::online_chain*)
   {
      ::online_chain *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::online_chain));
      static ::ROOT::TGenericClassInfo 
         instance("online_chain", "online_chain.hh", 26,
                  typeid(::online_chain), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &online_chain_Dictionary, isa_proxy, 0,
                  sizeof(::online_chain) );
      instance.SetNew(&new_online_chain);
      instance.SetNewArray(&newArray_online_chain);
      instance.SetDelete(&delete_online_chain);
      instance.SetDeleteArray(&deleteArray_online_chain);
      instance.SetDestructor(&destruct_online_chain);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::online_chain*)
   {
      return GenerateInitInstanceLocal((::online_chain*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::online_chain*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *online_chain_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::online_chain*)0x0)->GetClass();
      online_chain_TClassManip(theClass);
   return theClass;
   }

   static void online_chain_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_online_chain(void *p) {
      return  p ? new(p) ::online_chain : new ::online_chain;
   }
   static void *newArray_online_chain(Long_t nElements, void *p) {
      return p ? new(p) ::online_chain[nElements] : new ::online_chain[nElements];
   }
   // Wrapper around operator delete
   static void delete_online_chain(void *p) {
      delete ((::online_chain*)p);
   }
   static void deleteArray_online_chain(void *p) {
      delete [] ((::online_chain*)p);
   }
   static void destruct_online_chain(void *p) {
      typedef ::online_chain current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::online_chain

namespace {
  void TriggerDictionaryInitialization_online_chain_dict_Impl() {
    static const char* headers[] = {
"online_chain.hh",
0
    };
    static const char* includePaths[] = {
"/cvmfs/eel.gsi.de/debian10-x86_64/root/624-04/include/",
"/u/cjones/ucesb/hbook/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "online_chain_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$online_chain.hh")))  online_chain;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "online_chain_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "online_chain.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"online_chain", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("online_chain_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_online_chain_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_online_chain_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_online_chain_dict() {
  TriggerDictionaryInitialization_online_chain_dict_Impl();
}

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_wasmer_Instance */

#ifndef _Included_org_wasmer_Instance
#define _Included_org_wasmer_Instance
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_wasmer_Instance
 * Method:    nativeInstantiate
 * Signature: (Lorg/wasmer/Instance;[B)J
 */
JNIEXPORT jlong JNICALL Java_org_wasmer_Instance_nativeInstantiate
  (JNIEnv *, jobject, jobject, jbyteArray);

/*
 * Class:     org_wasmer_Instance
 * Method:    nativeDrop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_wasmer_Instance_nativeDrop
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_wasmer_Instance
 * Method:    nativeCall
 * Signature: (JLjava/lang/String;[Ljava/lang/Object;)[Ljava/lang/Object;
 */
JNIEXPORT jobjectArray JNICALL Java_org_wasmer_Instance_nativeCall
  (JNIEnv *, jobject, jlong, jstring, jobjectArray);

/*
 * Class:     org_wasmer_Instance
 * Method:    nativeInitializeExportedFunctions
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_wasmer_Instance_nativeInitializeExportedFunctions
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_wasmer_Instance
 * Method:    nativeInitializeExportedMemories
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_wasmer_Instance_nativeInitializeExportedMemories
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif

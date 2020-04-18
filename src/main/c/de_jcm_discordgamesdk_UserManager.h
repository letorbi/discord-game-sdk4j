/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class de_jcm_discordgamesdk_UserManager */

#ifndef _Included_de_jcm_discordgamesdk_UserManager
#define _Included_de_jcm_discordgamesdk_UserManager
#ifdef __cplusplus
extern "C" {
#endif
#undef de_jcm_discordgamesdk_UserManager_USER_FLAG_PARTNER
#define de_jcm_discordgamesdk_UserManager_USER_FLAG_PARTNER 2L
#undef de_jcm_discordgamesdk_UserManager_USER_FLAG_HYPE_SQUAD_EVENTS
#define de_jcm_discordgamesdk_UserManager_USER_FLAG_HYPE_SQUAD_EVENTS 4L
#undef de_jcm_discordgamesdk_UserManager_USER_FLAG_HYPE_SQUAD_HOUSE1
#define de_jcm_discordgamesdk_UserManager_USER_FLAG_HYPE_SQUAD_HOUSE1 64L
#undef de_jcm_discordgamesdk_UserManager_USER_FLAG_HYPE_SQUAD_HOUSE2
#define de_jcm_discordgamesdk_UserManager_USER_FLAG_HYPE_SQUAD_HOUSE2 128L
#undef de_jcm_discordgamesdk_UserManager_USER_FLAG_HYPE_SQUAD_HOUSE3
#define de_jcm_discordgamesdk_UserManager_USER_FLAG_HYPE_SQUAD_HOUSE3 256L
/*
 * Class:     de_jcm_discordgamesdk_UserManager
 * Method:    getCurrentUser
 * Signature: (J)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_de_jcm_discordgamesdk_UserManager_getCurrentUser
  (JNIEnv *, jobject, jlong);

/*
 * Class:     de_jcm_discordgamesdk_UserManager
 * Method:    getUser
 * Signature: (JJLjava/util/function/BiConsumer;)V
 */
JNIEXPORT void JNICALL Java_de_jcm_discordgamesdk_UserManager_getUser
  (JNIEnv *, jobject, jlong, jlong, jobject);

/*
 * Class:     de_jcm_discordgamesdk_UserManager
 * Method:    getCurrentUserPremiumType
 * Signature: (J)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_de_jcm_discordgamesdk_UserManager_getCurrentUserPremiumType
  (JNIEnv *, jobject, jlong);

/*
 * Class:     de_jcm_discordgamesdk_UserManager
 * Method:    currentUserHasFlag
 * Signature: (JI)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_de_jcm_discordgamesdk_UserManager_currentUserHasFlag
  (JNIEnv *, jobject, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
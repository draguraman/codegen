/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//










// Generated Code 

#include <android_view_KeyCharacterMap_KeyData.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_view_KeyCharacterMap_KeyData"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_view_KeyCharacterMap_KeyData::android_view_KeyCharacterMap_KeyData(const android_view_KeyCharacterMap_KeyData& cc)
{
	LOGV("android_view_KeyCharacterMap_KeyData::android_view_KeyCharacterMap_KeyData(const android_view_KeyCharacterMap_KeyData& cc) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long ccaddress = (long) &cc;
	LOGV("registerProxyComponent ccaddress %ld", ccaddress);
	jobject proxiedCCComponent = ctx->findProxyComponent(ccaddress);
	LOGV("registerProxyComponent proxiedCCComponent %ld", (long) proxiedCCComponent);
	long address = (long) this;
	LOGV("registerProxyComponent address %ld", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		proxiedComponent = proxiedCCComponent;
		LOGV("registerProxyComponent registering proxied component %ld using %d", proxiedComponent, address);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("android_view_KeyCharacterMap_KeyData::android_view_KeyCharacterMap_KeyData(const android_view_KeyCharacterMap_KeyData& cc) exit");
}
android_view_KeyCharacterMap_KeyData::android_view_KeyCharacterMap_KeyData(Proxy proxy)
{
	LOGV("android_view_KeyCharacterMap_KeyData::android_view_KeyCharacterMap_KeyData(Proxy proxy) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	LOGV("registerProxyComponent address %d", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		// ensure local ref
		jobject proxyref = jni->newLocalRef((jobject) proxy.address);
		proxiedComponent = jni->localToGlobalRef(proxyref);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("android_view_KeyCharacterMap_KeyData::android_view_KeyCharacterMap_KeyData(Proxy proxy) exit");
}
Proxy android_view_KeyCharacterMap_KeyData::proxy() const
{	
	LOGV("android_view_KeyCharacterMap_KeyData::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_view_KeyCharacterMap_KeyData cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_KeyCharacterMap_KeyData jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_view_KeyCharacterMap_KeyData::proxy() exit");	

	return proxy;
}
android_view_KeyCharacterMap_KeyData::android_view_KeyCharacterMap_KeyData()
{
	LOGV("android_view_KeyCharacterMap_KeyData::android_view_KeyCharacterMap_KeyData() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/view/KeyCharacterMap$KeyData";

	LOGV("android_view_KeyCharacterMap_KeyData className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_KeyCharacterMap_KeyData cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_KeyCharacterMap_KeyData jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_view_KeyCharacterMap_KeyData::android_view_KeyCharacterMap_KeyData() exit");	
}
// Default Instance Destructor
android_view_KeyCharacterMap_KeyData::~android_view_KeyCharacterMap_KeyData()
{
	LOGV("android_view_KeyCharacterMap_KeyData::~android_view_KeyCharacterMap_KeyData() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_view_KeyCharacterMap_KeyData::~android_view_KeyCharacterMap_KeyData() exit");
}
// Functions

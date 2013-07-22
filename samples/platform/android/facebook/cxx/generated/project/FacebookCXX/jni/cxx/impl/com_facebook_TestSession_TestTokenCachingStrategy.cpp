/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 










// Generated Code 

#include <com_facebook_TestSession_TestTokenCachingStrategy.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
// TODO: FIXME: add include package
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_TestSession_TestTokenCachingStrategy"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

// 
// 
// 
// 
// 
// 
// using namespace AndroidCXX;
// 
// 
// 
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
com_facebook_TestSession_TestTokenCachingStrategy::com_facebook_TestSession_TestTokenCachingStrategy(const com_facebook_TestSession_TestTokenCachingStrategy& cc)
{
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy::com_facebook_TestSession_TestTokenCachingStrategy(const com_facebook_TestSession_TestTokenCachingStrategy& cc) enter");

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

	LOGV("com_facebook_TestSession_TestTokenCachingStrategy::com_facebook_TestSession_TestTokenCachingStrategy(const com_facebook_TestSession_TestTokenCachingStrategy& cc) exit");
}
com_facebook_TestSession_TestTokenCachingStrategy::com_facebook_TestSession_TestTokenCachingStrategy(void * proxy)
{
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy::com_facebook_TestSession_TestTokenCachingStrategy(void * proxy) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	LOGV("registerProxyComponent address %d", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		proxiedComponent = jni->localToGlobalRef((jobject) proxy);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("com_facebook_TestSession_TestTokenCachingStrategy::com_facebook_TestSession_TestTokenCachingStrategy(void * proxy) exit");
}
com_facebook_TestSession_TestTokenCachingStrategy::com_facebook_TestSession_TestTokenCachingStrategy()
{
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy::com_facebook_TestSession_TestTokenCachingStrategy() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/TestSession$TestTokenCachingStrategy";

	LOGV("com_facebook_TestSession_TestTokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_TestSession_TestTokenCachingStrategy::com_facebook_TestSession_TestTokenCachingStrategy() exit");	
}
// Public Constructors
// Default Instance Destructor
com_facebook_TestSession_TestTokenCachingStrategy::~com_facebook_TestSession_TestTokenCachingStrategy()
{
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy::~com_facebook_TestSession_TestTokenCachingStrategy() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy::~com_facebook_TestSession_TestTokenCachingStrategy() exit");
}
// Functions
void com_facebook_TestSession_TestTokenCachingStrategy::clear()
{
	LOGV("void com_facebook_TestSession_TestTokenCachingStrategy::clear() enter");

	const char *methodName = "clear";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/TestSession$TestTokenCachingStrategy";

	LOGV("com_facebook_TestSession_TestTokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_TestSession_TestTokenCachingStrategy::clear() exit");

}
AndroidCXX::android_os_Bundle com_facebook_TestSession_TestTokenCachingStrategy::load()
{
	LOGV("AndroidCXX::android_os_Bundle com_facebook_TestSession_TestTokenCachingStrategy::load() enter");

	const char *methodName = "load";
	const char *methodSignature = "()Landroid/os/Bundle;";
	const char *className = "com/facebook/TestSession$TestTokenCachingStrategy";

	LOGV("com_facebook_TestSession_TestTokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy jni address %d", javaObject);


	AndroidCXX::android_os_Bundle result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_os_Bundle) (AndroidCXX::android_os_Bundle((AndroidCXX::android_os_Bundle *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_os_Bundle com_facebook_TestSession_TestTokenCachingStrategy::load() exit");

	return result;
}
void com_facebook_TestSession_TestTokenCachingStrategy::save(AndroidCXX::android_os_Bundle& arg0)
{
	LOGV("void com_facebook_TestSession_TestTokenCachingStrategy::save(AndroidCXX::android_os_Bundle& arg0) enter");

	const char *methodName = "save";
	const char *methodSignature = "(Landroid/os/Bundle;)V";
	const char *className = "com/facebook/TestSession$TestTokenCachingStrategy";

	LOGV("com_facebook_TestSession_TestTokenCachingStrategy className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_TestSession_TestTokenCachingStrategy jni address %d", javaObject);

	jobject jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.os.Bundle");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_Bundle(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_TestSession_TestTokenCachingStrategy::save(AndroidCXX::android_os_Bundle& arg0) exit");

}

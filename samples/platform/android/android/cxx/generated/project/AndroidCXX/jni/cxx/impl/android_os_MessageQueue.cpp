/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 









// Generated Code 

#include <android_os_MessageQueue.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_os_MessageQueue"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_os_MessageQueue::android_os_MessageQueue(const android_os_MessageQueue& cc)
{
	LOGV("android_os_MessageQueue::android_os_MessageQueue(const android_os_MessageQueue& cc) enter");

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

	LOGV("android_os_MessageQueue::android_os_MessageQueue(const android_os_MessageQueue& cc) exit");
}
android_os_MessageQueue::android_os_MessageQueue(Proxy proxy)
{
	LOGV("android_os_MessageQueue::android_os_MessageQueue(Proxy proxy) enter");

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

	LOGV("android_os_MessageQueue::android_os_MessageQueue(Proxy proxy) exit");
}
Proxy android_os_MessageQueue::proxy() const
{	
	LOGV("android_os_MessageQueue::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_os_MessageQueue cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_os_MessageQueue jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_os_MessageQueue::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_os_MessageQueue::~android_os_MessageQueue()
{
	LOGV("android_os_MessageQueue::~android_os_MessageQueue() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_os_MessageQueue::~android_os_MessageQueue() exit");
}
// Functions
void android_os_MessageQueue::addIdleHandler(AndroidCXX::android_os_MessageQueue_IdleHandler const& arg0)
{
	LOGV("void android_os_MessageQueue::addIdleHandler(AndroidCXX::android_os_MessageQueue_IdleHandler const& arg0) enter");

	const char *methodName = "addIdleHandler";
	const char *methodSignature = "(Landroid/os/MessageQueue$IdleHandler;)V";
	const char *className = "android/os/MessageQueue";

	LOGV("android_os_MessageQueue className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_os_MessageQueue cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_os_MessageQueue jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.MessageQueue$IdleHandler");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_MessageQueue_IdleHandler(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_os_MessageQueue::addIdleHandler(AndroidCXX::android_os_MessageQueue_IdleHandler const& arg0) exit");

}
void android_os_MessageQueue::removeIdleHandler(AndroidCXX::android_os_MessageQueue_IdleHandler const& arg0)
{
	LOGV("void android_os_MessageQueue::removeIdleHandler(AndroidCXX::android_os_MessageQueue_IdleHandler const& arg0) enter");

	const char *methodName = "removeIdleHandler";
	const char *methodSignature = "(Landroid/os/MessageQueue$IdleHandler;)V";
	const char *className = "android/os/MessageQueue";

	LOGV("android_os_MessageQueue className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_os_MessageQueue cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_os_MessageQueue jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.os.MessageQueue$IdleHandler");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_os_MessageQueue_IdleHandler(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_os_MessageQueue::removeIdleHandler(AndroidCXX::android_os_MessageQueue_IdleHandler const& arg0) exit");

}

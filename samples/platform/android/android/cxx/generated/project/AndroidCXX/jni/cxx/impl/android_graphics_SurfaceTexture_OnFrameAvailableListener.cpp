/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#include <android_graphics_SurfaceTexture_OnFrameAvailableListener.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_graphics_SurfaceTexture_OnFrameAvailableListener"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_graphics_SurfaceTexture_OnFrameAvailableListener::android_graphics_SurfaceTexture_OnFrameAvailableListener(const android_graphics_SurfaceTexture_OnFrameAvailableListener& cc)
{
	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener::android_graphics_SurfaceTexture_OnFrameAvailableListener(const android_graphics_SurfaceTexture_OnFrameAvailableListener& cc) enter");

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

	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener::android_graphics_SurfaceTexture_OnFrameAvailableListener(const android_graphics_SurfaceTexture_OnFrameAvailableListener& cc) exit");
}
android_graphics_SurfaceTexture_OnFrameAvailableListener::android_graphics_SurfaceTexture_OnFrameAvailableListener(void * proxy)
{
	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener::android_graphics_SurfaceTexture_OnFrameAvailableListener(void * proxy) enter");

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

	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener::android_graphics_SurfaceTexture_OnFrameAvailableListener(void * proxy) exit");
}
android_graphics_SurfaceTexture_OnFrameAvailableListener::android_graphics_SurfaceTexture_OnFrameAvailableListener()
{
	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener::android_graphics_SurfaceTexture_OnFrameAvailableListener() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/graphics/SurfaceTexture$OnFrameAvailableListener";

	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener::android_graphics_SurfaceTexture_OnFrameAvailableListener() exit");	
}
// Public Constructors
// Default Instance Destructor
android_graphics_SurfaceTexture_OnFrameAvailableListener::~android_graphics_SurfaceTexture_OnFrameAvailableListener()
{
	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener::~android_graphics_SurfaceTexture_OnFrameAvailableListener() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener::~android_graphics_SurfaceTexture_OnFrameAvailableListener() exit");
}
// Functions
void android_graphics_SurfaceTexture_OnFrameAvailableListener::onFrameAvailable(AndroidCXX::android_graphics_SurfaceTexture& arg0)
{
	LOGV("void android_graphics_SurfaceTexture_OnFrameAvailableListener::onFrameAvailable(AndroidCXX::android_graphics_SurfaceTexture& arg0) enter");

	const char *methodName = "onFrameAvailable";
	const char *methodSignature = "(Landroid/graphics/SurfaceTexture;)V";
	const char *className = "android/graphics/SurfaceTexture$OnFrameAvailableListener";

	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_graphics_SurfaceTexture_OnFrameAvailableListener jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.graphics.SurfaceTexture");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_graphics_SurfaceTexture(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_graphics_SurfaceTexture_OnFrameAvailableListener::onFrameAvailable(AndroidCXX::android_graphics_SurfaceTexture& arg0) exit");

}

/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 


 		 










// Generated Code 

#ifndef _android_content_pm_ProviderInfo
#define _android_content_pm_ProviderInfo
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>


#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class android_os_Parcel;

class android_content_pm_ProviderInfo;

class android_content_pm_ProviderInfo
{
public:

	android_content_pm_ProviderInfo(const android_content_pm_ProviderInfo& cc);
	android_content_pm_ProviderInfo(void * proxy);
	// Public Constructors
	android_content_pm_ProviderInfo();
	android_content_pm_ProviderInfo(AndroidCXX::android_content_pm_ProviderInfo& arg0);
	// Default Destructor
	virtual ~android_content_pm_ProviderInfo();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_ProviderInfo
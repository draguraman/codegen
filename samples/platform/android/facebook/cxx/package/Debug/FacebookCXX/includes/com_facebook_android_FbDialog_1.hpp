/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#ifndef _com_facebook_android_FbDialog_1
#define _com_facebook_android_FbDialog_1
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>

#include <com_facebook_FacebookException.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations


class com_facebook_FacebookException;

class com_facebook_android_FbDialog_1
{
public:

	com_facebook_android_FbDialog_1(const com_facebook_android_FbDialog_1& cc);
	com_facebook_android_FbDialog_1(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_android_FbDialog_1();
	// Functions
	 void onComplete(AndroidCXX::android_os_Bundle const& arg0,FacebookCXX::com_facebook_FacebookException const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_FbDialog_1
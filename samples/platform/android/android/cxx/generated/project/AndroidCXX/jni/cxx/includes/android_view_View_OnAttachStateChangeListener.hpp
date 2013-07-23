/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 









// Generated Code 

#ifndef _android_view_View_OnAttachStateChangeListener
#define _android_view_View_OnAttachStateChangeListener
//
// Scroll Down 
//


#include <android_view_View.hpp>

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

class android_view_View;

class android_view_View_OnAttachStateChangeListener
{
public:

	android_view_View_OnAttachStateChangeListener(const android_view_View_OnAttachStateChangeListener& cc);
	android_view_View_OnAttachStateChangeListener(void * proxy);
	// Public Constructors
	android_view_View_OnAttachStateChangeListener();
	// Default Destructor
	virtual ~android_view_View_OnAttachStateChangeListener();
	// Functions
	 void onViewAttachedToWindow(AndroidCXX::android_view_View& arg0);
	 void onViewDetachedFromWindow(AndroidCXX::android_view_View& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnAttachStateChangeListener
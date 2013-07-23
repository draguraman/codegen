/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 








































// Generated Code 

#ifndef _android_widget_HorizontalScrollView
#define _android_widget_HorizontalScrollView
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_MotionEvent.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_graphics_Rect.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_os_Bundle.hpp>

#include <android_graphics_Canvas.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

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

class android_view_ViewGroup_LayoutParams;

class android_view_MotionEvent;

class android_view_KeyEvent;

class android_graphics_Rect;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_os_Bundle;

class android_graphics_Canvas;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_HorizontalScrollView
{
public:

	android_widget_HorizontalScrollView(const android_widget_HorizontalScrollView& cc);
	android_widget_HorizontalScrollView(void * proxy);
	// Public Constructors
	android_widget_HorizontalScrollView(AndroidCXX::android_content_Context& arg0);
	android_widget_HorizontalScrollView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_widget_HorizontalScrollView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_HorizontalScrollView();
	// Default Destructor
	virtual ~android_widget_HorizontalScrollView();
	// Functions
	 void addView(AndroidCXX::android_view_View& arg0,int& arg1);
	 void addView(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams& arg1);
	 void addView(AndroidCXX::android_view_View& arg0);
	 void addView(AndroidCXX::android_view_View& arg0,int& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams& arg2);
	 bool onTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool onGenericMotionEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool dispatchKeyEvent(AndroidCXX::android_view_KeyEvent& arg0);
	 void requestChildFocus(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_View& arg1);
	 bool requestChildRectangleOnScreen(AndroidCXX::android_view_View& arg0,AndroidCXX::android_graphics_Rect& arg1,bool& arg2);
	 void requestDisallowInterceptTouchEvent(bool& arg0);
	 bool onInterceptTouchEvent(AndroidCXX::android_view_MotionEvent& arg0);
	 bool shouldDelayChildPressedState();
	 void requestLayout();
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 bool performAccessibilityAction(int& arg0,AndroidCXX::android_os_Bundle& arg1);
	 void scrollTo(int& arg0,int& arg1);
	 void computeScroll();
	 void draw(AndroidCXX::android_graphics_Canvas& arg0);
	 void setOverScrollMode(int& arg0);
	 void smoothScrollBy(int& arg0,int& arg1);
	 int getMaxScrollAmount();
	 void fling(int& arg0);
	 bool isFillViewport();
	 void setFillViewport(bool& arg0);
	 bool isSmoothScrollingEnabled();
	 void setSmoothScrollingEnabled(bool& arg0);
	 bool executeKeyEvent(AndroidCXX::android_view_KeyEvent& arg0);
	 bool pageScroll(int& arg0);
	 bool fullScroll(int& arg0);
	 bool arrowScroll(int& arg0);
	 void smoothScrollTo(int& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_HorizontalScrollView
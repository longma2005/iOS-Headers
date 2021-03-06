//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CAMeshVertex {
    struct CGPoint _field1;
    struct CAPoint3D _field2;
};

struct CAPoint3D {
    float _field1;
    float _field2;
    float _field3;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct GKVertexCurve {
    struct CGPoint _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    struct CGPoint _field5;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int respondsTo_bubbleAnimatorForTransitionFromViewController:1;
    unsigned int respondsTo_bubbleAnimatorForTransitionToViewController:1;
    unsigned int respondsTo_bubbleAnimatorForRotation:1;
    unsigned int respondsTo_finalScreenFrameInViewCoordinatesForBubbleOfType:1;
    unsigned int respondsTo_configureControlForBubble:1;
    unsigned int respondsTo_bubblesUsedForAnyTransition:1;
    unsigned int respondsTo_bubbleFlowAnimateInDuration:1;
    unsigned int respondsTo_bubbleFlowAnimateOutDuration:1;
    unsigned int respondsTo_bubbleFlowSubviewFadeOutDuration:1;
    unsigned int respondsTo_bubbleFlowSubviewFadeOutDelay:1;
    unsigned int respondsTo_bubbleFlowSubviewFadeInDuration:1;
    unsigned int respondsTo_bubbleFlowSubviewFadeInDelay:1;
    unsigned int respondsTo_viewWillAppearAnimated_bubbleFlow:1;
    unsigned int respondsTo_viewDidAppearAnimated_bubbleFlow:1;
    unsigned int respondsTo_viewWillDisappearAnimated_bubbleFlow:1;
    unsigned int respondsTo_viewDidDisappearAnimated_bubbleFlow:1;
    unsigned int respondsTo_viewsToAnimateInWhileAppearingWithBubbleFlow:1;
    unsigned int respondsTo_viewsToAnimateOutWhileDisappearingWithBubbleFlow:1;
    unsigned int respondsTo_willAnimateAppearingWithBubbleFlow:1;
    unsigned int respondsTo_willAnimateDisappearingWithBubbleFlow:1;
    unsigned int respondsTo_willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime_relativeDuration_absoluteTransitionDuration:1;
    unsigned int respondsTo_willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime_relativeDuration_absoluteTransitionDuration:1;
    unsigned int respondsTo_updateBubbleTextImmediatelyForTransitionFromViewController:1;
    unsigned int respondsTo_readyToDisappearWithBubbleFlow:1;
    unsigned int respondsTo_readyToAppearWithBubbleFlow:1;
    unsigned int respondsTo_delayDisappearingWithBubbleFlowUntil:1;
    unsigned int respondsTo_delayAppearingWithBubbleFlowUntil:1;
} CDStruct_b207fc29;

#pragma mark Named Unions

union _GLKVector3 {
    struct {
        float x;
        float y;
        float z;
    } ;
    struct {
        float r;
        float g;
        float b;
    } ;
    struct {
        float s;
        float t;
        float p;
    } ;
    float v[3];
};


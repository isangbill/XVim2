//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$S12SourceEditor0aB4ViewCN.h"

#import <IDESourceEditor/DVTSourceCodeComparisonTextEditorView-Protocol.h>

@class NSColor;

@interface _$S12SourceEditor0aB4ViewCN (IDESourceEditor) <DVTSourceCodeComparisonTextEditorView>
- (struct _DVTSourceCodeComparisonViewportRange)viewportRangeForRange:(struct _NSRange)arg1;
@property(nonatomic, readonly) double viewportHeight;
- (double)heightForLineRange:(struct _NSRange)arg1;
- (long long)lineAtViewportPoint:(double)arg1;
- (void)scrollCenterToComparisonPosition:(struct _DVTSourceCodeComparisonTextEditorScrollPosition)arg1;
- (void)scrollToComparisonPosition:(struct _DVTSourceCodeComparisonTextEditorScrollPosition)arg1;
@property(nonatomic, readonly) struct _DVTSourceCodeComparisonTextEditorScrollPosition centeredComparisonScrollPosition;
@property(nonatomic, readonly) struct _DVTSourceCodeComparisonTextEditorScrollPosition comparisonScrollPosition;
@property(nonatomic, readonly) struct _NSRange visibleLineRange;
@property(nonatomic, readonly) BOOL isScrollingBasedOnLayout;
@property(nonatomic, readonly) double defaultLineHeight;
@property(nonatomic, readonly) unsigned long long numberOfLines;
@property(nonatomic, readonly) NSColor *backgroundColor;
@end


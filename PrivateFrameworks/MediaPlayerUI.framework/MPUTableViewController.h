/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MediaPlayerUI/MPUDataSourceViewController.h>

#import "MPStoreDownloadManagerObserver.h"
#import "MPUActionTableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MPUQueryDataSource, UITableView;

@interface MPUTableViewController : MPUDataSourceViewController <MPStoreDownloadManagerObserver, MPUActionTableViewDataSource, UITableViewDelegate>
{
    int _numberOfPrefixActionRows;
    UITableView *_tableView;
    Class _cellConfigurationClass;
    MPUQueryDataSource *_queryDataSource;
}

+ (Class)_tableViewClass;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) MPUQueryDataSource *queryDataSource; // @synthesize queryDataSource=_queryDataSource;
@property(readonly, nonatomic) Class cellConfigurationClass; // @synthesize cellConfigurationClass=_cellConfigurationClass;
- (void).cxx_destruct;
- (void)_updateVisibleCellsForDownloads:(id)arg1;
- (id)_createTableView;
- (BOOL)isTableViewLoaded;
@property(readonly, nonatomic) UITableView *tableView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (Class)tableView:(id)arg1 prefixActionCellConfigurationAtIndex:(int)arg2;
- (int)prefixActionIndexForIndexPath:(id)arg1;
- (int)numberOfPrefixActionRowsInTableView:(id)arg1;
- (int)indexOfFirstDataSourceSection;
- (int)dataSourceSectionForSection:(int)arg1;
- (int)dataSourceIndexForIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)reloadData;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;

@end


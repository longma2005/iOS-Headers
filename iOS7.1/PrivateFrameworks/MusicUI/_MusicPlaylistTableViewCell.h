//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSAttributedString, UIImage, UIImageView, UILabel;

@interface _MusicPlaylistTableViewCell : UITableViewCell
{
    UIImageView *_artworkImageView;
    UILabel *_detailLabel;
    UIImageView *_playlistTypeImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *playlistTypeImage;
@property(copy, nonatomic) NSAttributedString *detailAttributedString;
@property(retain, nonatomic) UIImage *artworkImage;
- (void)layoutSubviewsPhoneInRect:(struct CGRect)arg1;
- (void)layoutSubviewsPadInRect:(struct CGRect)arg1;
- (void)layoutSubviews;

@end


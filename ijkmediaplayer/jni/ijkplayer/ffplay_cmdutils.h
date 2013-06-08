/*****************************************************************************
 * ffplay_cmdutils.h
 *****************************************************************************
 *
 * copyright (c) 2001 Fabrice Bellard
 * copyright (c) 2013 Zhang Rui <bbcallen@gmail.com>
 *
 * This file is part of ijkPlayer.
 *
 * ijkPlayer is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * ijkPlayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with ijkPlayer; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef IJKPLAYER__FFPLAY_CMDUTILS_H
#define IJKPLAYER__FFPLAY_CMDUTILS_H

#include "ffplay_def.h"

void            print_error(const char *filename, int err);
AVDictionary  **setup_find_stream_info_opts(AVFormatContext *s, AVDictionary *codec_opts);
AVDictionary   *filter_codec_opts(AVDictionary *opts, enum AVCodecID codec_id,
                                  AVFormatContext *s, AVStream *st, AVCodec *codec);

#endif

/*
 * Copyright (c) 2017-2019, NVIDIA CORPORATION. All rights reserved.
 */

#ifndef HEADER_JETSON_INFO_H
#define HEADER_JETSON_INFO_H

#include <stddef.h>
#include <stdint.h>

#include "error.h"
#include "nvc.h"

int  jetson_info_init(struct error *, struct nvc_jetson_info *, size_t);
void jetson_info_free(struct nvc_jetson_info *);
void jetson_info_pack(struct nvc_jetson_info *, size_t);

#endif /* HEADER_CSV_H */
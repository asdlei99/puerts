/*
 * Tencent is pleased to support the open source community by making Puerts available.
 * Copyright (C) 2020 Tencent.  All rights reserved.
 * Puerts is licensed under the BSD 3-Clause License, except for the third-party components listed in the file 'LICENSE' which may
 * be subject to their corresponding license terms. This file is subject to the terms and conditions defined in file 'LICENSE',
 * which is part of this source code package.
 */

#pragma once

#include "CoreMinimal.h"
#include "ArrayBuffer.generated.h"

USTRUCT(BlueprintType)
struct FArrayBuffer
{
public:
    GENERATED_USTRUCT_BODY()

public:
    void* Data;

    size_t Length;

    bool bCopy = false;
};

USTRUCT(BlueprintType)
struct FArrayBufferValue
{
public:
    GENERATED_USTRUCT_BODY()

public:
    TArray<uint8> Data;
};
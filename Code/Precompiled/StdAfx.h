﻿// Copyright ⓒ 2018 Valentyn Bondarenko. All rights reserved.

#pragma once

#ifndef _WIN32
#   error Only Win32 is supported.
#endif

#include <fstream>
#include <vector>
#include <memory>
#include <string>
#include <filesystem>

#include <Windows.h>

#include <..\DDSTextureLoader\DDSTextureLoader.h>

#include <d3d11.h>
#include <d3dcompiler.h>

#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>

#include <DirectXMath.h>

namespace bm
{
#if _MSC_VER  > 1900
    namespace fs = std::filesystem;
#elif _MSC_VER  == 1900
    namespace fs = std::experimental::filesystem;
#else
#   error Your compiler does not support C++17 FileSystem.
#endif

    using namespace std::string_literals;

    using Matrix = DirectX::XMMATRIX;
    using Vector = DirectX::XMVECTOR;

    using Vector2D = DirectX::XMFLOAT2;
    using Vector3D = DirectX::XMFLOAT3;
    using Vector4D = DirectX::XMFLOAT4;

    using DirectX::operator*;
    using DirectX::operator/;

    using DirectX::operator+;
    using DirectX::operator+=;
}

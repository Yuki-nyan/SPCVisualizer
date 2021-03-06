#pragma once

#include <atlbase.h>
#include <d3d11.h>
#include <windows.h>
#include <DirectXMath.h>

#include "IGfx.h"

#include <memory>

class DCore;

typedef CComPtr<IDXGISwapChain>         DXGISwapChainPtr;
typedef CComPtr<ID3D11Device>           D3D11DevicePtr;
typedef CComPtr<ID3D11DeviceContext>    D3D11DeviceContextPtr;
typedef CComPtr<ID3D11Texture2D>        D3D11Texture2DPtr;
typedef CComPtr<ID3D11RenderTargetView> D3D11RenderTargetViewPtr;
typedef CComPtr<ID3D11PixelShader>      D3D11PixelShaderPtr;
typedef CComPtr<ID3D11VertexShader>     D3D11VertexShaderPtr;
typedef CComPtr<ID3D11Buffer>           D3D11BufferPtr;
typedef CComPtr<ID3D11InputLayout>      D3D11InputLayoutPtr;
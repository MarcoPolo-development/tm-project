#pragma once

#include "NewApp.h"
#include "CPSock.h"
#include "ObjectManager.h"
#include "MeshManager.h"
#include "TextureManager.h"
#include "TimerManager.h"
#include "TMScene.h"
#include "RenderDevice.h"
#include "EventTranslator.h"
#include "dsutil.h"
#include "SControl.h"

extern NewApp* g_pApp;
extern CPSock* g_pSocketManager;
extern CPSock* g_LoginSocket;
extern ObjectManager* g_pObjectManager;
extern EventTranslator* g_pEventTranslator;
extern MeshManager* g_pMeshManager;
extern TextureManager* g_pTextureManager;
extern TimerManager* g_pTimerManager;
extern TMScene* g_pCurrentScene;
extern RenderDevice* g_pDevice;
extern SCursor* g_pCursor;
extern CSoundManager* g_pSoundManager;

extern int g_nUseBlur;
extern int g_nAntialias;
extern int g_bDebugMsg;
extern int g_nReflection;
extern char g_szFontName[128];
extern int g_nFontBold;
extern float g_ClipNear;
extern float g_ClipFar;

static unsigned int g_dwHandIndex[101][2] =
{
    {19,25},{18,24},{15,21},{15,21},{12,18},{22,28},{23,29},
    {20,26},{24,30},{23,31},{32,17},{22,35},{34,44},{34,44},
    {34,44},{34,44},{34,44},{34,44},{34,44},{34,44},{0,0},
    {0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
};
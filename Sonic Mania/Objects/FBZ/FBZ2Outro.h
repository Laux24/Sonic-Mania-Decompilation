#ifndef OBJ_FBZ2OUTRO_H
#define OBJ_FBZ2OUTRO_H

#include "SonicMania.h"

#if RETRO_USE_PLUS
// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectFBZ2Outro;

// Entity Class
typedef struct {
    RSDK_ENTITY
    int field_58;
} EntityFBZ2Outro;

// Object Struct
extern ObjectFBZ2Outro *FBZ2Outro;

// Standard Entity Events
void FBZ2Outro_Update(void);
void FBZ2Outro_LateUpdate(void);
void FBZ2Outro_StaticUpdate(void);
void FBZ2Outro_Draw(void);
void FBZ2Outro_Create(void* data);
void FBZ2Outro_StageLoad(void);
void FBZ2Outro_EditorDraw(void);
void FBZ2Outro_EditorLoad(void);
void FBZ2Outro_Serialize(void);

// Extra Entity Functions
void FBZ2Outro_StartCutscene(EntityFBZ2Outro *outro);

bool32 FBZ2Outro_CutsceneState_Unknown1(EntityCutsceneSeq *host);
bool32 FBZ2Outro_CutsceneState_Unknown2(EntityCutsceneSeq *host);
bool32 FBZ2Outro_CutsceneState_Unknown3(EntityCutsceneSeq *host);

#endif

#endif //!OBJ_FBZ2OUTRO_H

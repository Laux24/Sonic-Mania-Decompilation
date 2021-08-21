#ifndef OBJ_FBZTRASH_H
#define OBJ_FBZTRASH_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    ushort aniFrames;
} ObjectFBZTrash;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    int type;
    int frameID;
    int field_64;
    int timer;
    int field_6C;
    Vector2 field_70;
    Vector2 field_78;
    Entity *parent;
    Hitbox hitbox;
    Animator animator;
} EntityFBZTrash;

// Object Struct
extern ObjectFBZTrash *FBZTrash;

// Standard Entity Events
void FBZTrash_Update(void);
void FBZTrash_LateUpdate(void);
void FBZTrash_StaticUpdate(void);
void FBZTrash_Draw(void);
void FBZTrash_Create(void* data);
void FBZTrash_StageLoad(void);
void FBZTrash_EditorDraw(void);
void FBZTrash_EditorLoad(void);
void FBZTrash_Serialize(void);

// Extra Entity Functions
void FBZTrash_Unknown1(EntityFBZTrash *trashPtr, int angle);
void FBZTrash_Unknown2(int x, int y);
void FBZTrash_Unknown3(void);
void FBZTrash_Unknown4(void);
void FBZTrash_Unknown5(void);
void FBZTrash_Unknown6(void);
void FBZTrash_Unknown7(void);

#endif //!OBJ_FBZTRASH_H

#ifndef OBJ_ROTATINGSTAIR_H
#define OBJ_ROTATINGSTAIR_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
	byte val;
} ObjectRotatingStair;

// Entity Class
typedef struct {
	MANIA_PLATFORM_BASE
	ushort oscOff;
	int field_D0;
	int field_D4;
} EntityRotatingStair;

// Object Struct
extern ObjectRotatingStair *RotatingStair;

// Standard Entity Events
void RotatingStair_Update(void);
void RotatingStair_LateUpdate(void);
void RotatingStair_StaticUpdate(void);
void RotatingStair_Draw(void);
void RotatingStair_Create(void* data);
void RotatingStair_StageLoad(void);
void RotatingStair_EditorDraw(void);
void RotatingStair_EditorLoad(void);
void RotatingStair_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_ROTATINGSTAIR_H

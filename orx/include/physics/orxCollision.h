/***************************************************************************
*                                                                         *
*   This library is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU Lesser General Public License           *
*   as published by the Free Software Foundation; either version 2.1      *
*   of the License, or (at your option) any later version.                *
*                                                                         *
***************************************************************************/

/**
* @file orxCollision.h
* @date 10/03/2008
* @author (C) Arcallians
* 
* @todo 
*/

/**
* @addtogroup Physics
* 
* Collision Module
* Allows to creates and handle collisions
* Collisions may be used by bodies.
*
* @{
*/


#ifndef _orxCOLLISION_H_
#define _orxCOLLISION_H_

#include "orxInclude.h"

#include "object/orxStructure.h"
#include "math/orxVector.h"


/** Collision flags
 */
#define orxCOLLISION_KU32_FLAG_NONE           0x00000000  /**< No flags */

#define orxCOLLISION_KU32_FLAG_2D             0x00000001  /**< 2D type collision flag  */
#define orxCOLLISION_KU32_FLAG_SHAPE          0x00000002  /**< Shape perfect flag */
#define orxCOLLISION_KU32_FLAG_BOX            0x00000004  /**< Box flag */
#define orxCOLLISION_KU32_FLAG_ADAPTIVE_BOX   0x00000008  /**< Adpative box flag */

#define orxCOLLISION_KU32_MASK_USER_ALL       0x000000FF  /**< User all ID mask */


/** Internal Collision structure
 */
typedef struct __orxCOLLISION_t               orxCOLLISION;


/** Collision module setup
 */
extern orxDLLAPI orxVOID                      orxCollision_Setup();

/** Inits the Collision module
 */
extern orxDLLAPI orxSTATUS                    orxCollision_Init();

/** Exits from the Collision module
 */
extern orxDLLAPI orxVOID                      orxCollision_Exit();


/** Creates an empty collision
 * @param[in]   _u32Flags                     Collision flags (2D / ...)
 * @param[in]   _pvRelativeSize               Size of the collision relative to the object that will use it
 * @param[in]   _pvRelativePosition           Position of the collicion relative to the pivot of the object that will use it
 * @return      Created orxCOLLISION / orxNULL
 */
extern orxDLLAPI orxCOLLISION *orxFASTCALL    orxCollision_Create(orxU32 _u32Flags, orxCONST orxVECTOR *_pvRelativeSize, orxCONST orxVECTOR *_pvRelativePosition);

/** Deletes a collision
 * @param[in]   _pstCollision        Concerned collision
 * @return      orxSTATUS_SUCCESS / orxSTATUS_FAILURE
 */
extern orxDLLAPI orxSTATUS orxFASTCALL        orxCollision_Delete(orxCOLLISION *_pstCollision);


#endif /* _orxCOLLISION_H_ */


/** @} */

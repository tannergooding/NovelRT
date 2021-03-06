// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root
// for more information.

#ifndef NOVELRT_INTEROP_SCENEGRAPH_QUADTREESCENEPOINT_H
#define NOVELRT_INTEROP_SCENEGRAPH_QUADTREESCENEPOINT_H

#include "../NrtTypedefs.h"

#ifdef __cplusplus
extern "C"
{
#endif

    NrtResult Nrt_QuadTreeScenePoint_createVector(NrtGeoVector2F position,
                                                  NrtSceneNodeHandle node,
                                                  NrtQuadTreeScenePointHandle* outputPoint);
    NrtResult Nrt_QuadTreeScenePoint_createFloat(float x,
                                                 float y,
                                                 NrtSceneNodeHandle node,
                                                 NrtQuadTreeScenePointHandle* outputPoint);
    NrtResult Nrt_QuadTreeScenePoint_getSceneNode(NrtQuadTreeScenePointHandle point, NrtSceneNodeHandle* outputNode);

#ifdef __cplusplus
}
#endif

#endif // NOVELRT_INTEROP_SCENEGRAPH_QUADTREESCENEPOINT_H

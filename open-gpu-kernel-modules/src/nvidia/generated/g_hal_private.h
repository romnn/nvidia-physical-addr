// This file is automatically generated by rmconfig - DO NOT EDIT!
//
// Private HAL support for halgen.
//
// Profile:  shipping-gpus-openrm
// Template: templates/gt_hal_private.h
//
// Chips:    TU10X, GA100, GA102, GA103, GA104, GA106, GA107, AD102, AD103, AD104, AD106, AD107, GH10X
//

//
// This file is included in several .c files for chips hal register and engines
// hal function assignment. The macros RMCFG_ENGINE_SETUP and RMCFG_HAL_SETUP_xxx
// are used to provide different content for those .c files.
//

#ifndef _G_RMCFG_HAL_PRIVATE_H_
#define _G_RMCFG_HAL_PRIVATE_H_

#include "g_hal.h"

// establish the per-chip RMCFG_HAL_SETUP_chip #defines as needed.
#if defined(RMCFG_ENGINE_SETUP)

// setup all enabled chip families
#if defined(RMCFG_HAL_SETUP_ALL)
#  define RMCFG_HAL_SETUP_TU10X          1
#  define RMCFG_HAL_SETUP_GA10X          1
#  define RMCFG_HAL_SETUP_AD10X          1
#  define RMCFG_HAL_SETUP_GH10X          1
#endif   // RMCFG_HAL_SETUP_ALL

//
// setup all enabled chips in each enabled family
//

#if defined(RMCFG_HAL_SETUP_TU10X)
#  define RMCFG_HAL_SETUP_TU102          1
#  define RMCFG_HAL_SETUP_TU104          1
#  define RMCFG_HAL_SETUP_TU106          1
#  define RMCFG_HAL_SETUP_TU116          1
#  define RMCFG_HAL_SETUP_TU117          1
#endif // TU10X

#if defined(RMCFG_HAL_SETUP_GA10X)
#  define RMCFG_HAL_SETUP_GA100          1
#  define RMCFG_HAL_SETUP_GA102          1
#  define RMCFG_HAL_SETUP_GA103          1
#  define RMCFG_HAL_SETUP_GA104          1
#  define RMCFG_HAL_SETUP_GA106          1
#  define RMCFG_HAL_SETUP_GA107          1
#endif // GA10X

#if defined(RMCFG_HAL_SETUP_AD10X)
#  define RMCFG_HAL_SETUP_AD102          1
#  define RMCFG_HAL_SETUP_AD103          1
#  define RMCFG_HAL_SETUP_AD104          1
#  define RMCFG_HAL_SETUP_AD106          1
#  define RMCFG_HAL_SETUP_AD107          1
#endif // AD10X

#if defined(RMCFG_HAL_SETUP_GH10X)
#  define RMCFG_HAL_SETUP_GH100          1
#endif // GH10X

#endif  // RMCFG_ENGINE_SETUP

// pull in private headers for each engine
#include "g_rpc_private.h"


//
// per-GPU structure with an interface init function for each engine
//

// registerHalModule function declaration
NV_STATUS registerHalModule(NvU32, const HAL_IFACE_SETUP *);

#if defined(RMCFG_HAL_SETUP_TU102)

static const HAL_IFACE_SETUP halIface_TU102 = {

    rpcHalIfacesSetup_TU102,

};

NV_STATUS registerHalModule_TU102(void)
{
    return registerHalModule(HAL_IMPL_TU102, &halIface_TU102);
}

#endif  // TU10X or TU102

#if defined(RMCFG_HAL_SETUP_TU104)

static const HAL_IFACE_SETUP halIface_TU104 = {

    rpcHalIfacesSetup_TU104,

};

NV_STATUS registerHalModule_TU104(void)
{
    return registerHalModule(HAL_IMPL_TU104, &halIface_TU104);
}

#endif  // TU10X or TU104

#if defined(RMCFG_HAL_SETUP_TU106)

static const HAL_IFACE_SETUP halIface_TU106 = {

    rpcHalIfacesSetup_TU106,

};

NV_STATUS registerHalModule_TU106(void)
{
    return registerHalModule(HAL_IMPL_TU106, &halIface_TU106);
}

#endif  // TU10X or TU106

#if defined(RMCFG_HAL_SETUP_TU116)

static const HAL_IFACE_SETUP halIface_TU116 = {

    rpcHalIfacesSetup_TU116,

};

NV_STATUS registerHalModule_TU116(void)
{
    return registerHalModule(HAL_IMPL_TU116, &halIface_TU116);
}

#endif  // TU10X or TU116

#if defined(RMCFG_HAL_SETUP_TU117)

static const HAL_IFACE_SETUP halIface_TU117 = {

    rpcHalIfacesSetup_TU117,

};

NV_STATUS registerHalModule_TU117(void)
{
    return registerHalModule(HAL_IMPL_TU117, &halIface_TU117);
}

#endif  // TU10X or TU117

#if defined(RMCFG_HAL_SETUP_GA100)

static const HAL_IFACE_SETUP halIface_GA100 = {

    rpcHalIfacesSetup_GA100,

};

NV_STATUS registerHalModule_GA100(void)
{
    return registerHalModule(HAL_IMPL_GA100, &halIface_GA100);
}

#endif  // GA10X or GA100

#if defined(RMCFG_HAL_SETUP_GA102)

static const HAL_IFACE_SETUP halIface_GA102 = {

    rpcHalIfacesSetup_GA102,

};

NV_STATUS registerHalModule_GA102(void)
{
    return registerHalModule(HAL_IMPL_GA102, &halIface_GA102);
}

#endif  // GA10X or GA102

#if defined(RMCFG_HAL_SETUP_GA103)

static const HAL_IFACE_SETUP halIface_GA103 = {

    rpcHalIfacesSetup_GA103,

};

NV_STATUS registerHalModule_GA103(void)
{
    return registerHalModule(HAL_IMPL_GA103, &halIface_GA103);
}

#endif  // GA10X or GA103

#if defined(RMCFG_HAL_SETUP_GA104)

static const HAL_IFACE_SETUP halIface_GA104 = {

    rpcHalIfacesSetup_GA104,

};

NV_STATUS registerHalModule_GA104(void)
{
    return registerHalModule(HAL_IMPL_GA104, &halIface_GA104);
}

#endif  // GA10X or GA104

#if defined(RMCFG_HAL_SETUP_GA106)

static const HAL_IFACE_SETUP halIface_GA106 = {

    rpcHalIfacesSetup_GA106,

};

NV_STATUS registerHalModule_GA106(void)
{
    return registerHalModule(HAL_IMPL_GA106, &halIface_GA106);
}

#endif  // GA10X or GA106

#if defined(RMCFG_HAL_SETUP_GA107)

static const HAL_IFACE_SETUP halIface_GA107 = {

    rpcHalIfacesSetup_GA107,

};

NV_STATUS registerHalModule_GA107(void)
{
    return registerHalModule(HAL_IMPL_GA107, &halIface_GA107);
}

#endif  // GA10X or GA107

#if defined(RMCFG_HAL_SETUP_AD102)

static const HAL_IFACE_SETUP halIface_AD102 = {

    rpcHalIfacesSetup_AD102,

};

NV_STATUS registerHalModule_AD102(void)
{
    return registerHalModule(HAL_IMPL_AD102, &halIface_AD102);
}

#endif  // AD10X or AD102

#if defined(RMCFG_HAL_SETUP_AD103)

static const HAL_IFACE_SETUP halIface_AD103 = {

    rpcHalIfacesSetup_AD103,

};

NV_STATUS registerHalModule_AD103(void)
{
    return registerHalModule(HAL_IMPL_AD103, &halIface_AD103);
}

#endif  // AD10X or AD103

#if defined(RMCFG_HAL_SETUP_AD104)

static const HAL_IFACE_SETUP halIface_AD104 = {

    rpcHalIfacesSetup_AD104,

};

NV_STATUS registerHalModule_AD104(void)
{
    return registerHalModule(HAL_IMPL_AD104, &halIface_AD104);
}

#endif  // AD10X or AD104

#if defined(RMCFG_HAL_SETUP_AD106)

static const HAL_IFACE_SETUP halIface_AD106 = {

    rpcHalIfacesSetup_AD106,

};

NV_STATUS registerHalModule_AD106(void)
{
    return registerHalModule(HAL_IMPL_AD106, &halIface_AD106);
}

#endif  // AD10X or AD106

#if defined(RMCFG_HAL_SETUP_AD107)

static const HAL_IFACE_SETUP halIface_AD107 = {

    rpcHalIfacesSetup_AD107,

};

NV_STATUS registerHalModule_AD107(void)
{
    return registerHalModule(HAL_IMPL_AD107, &halIface_AD107);
}

#endif  // AD10X or AD107

#if defined(RMCFG_HAL_SETUP_GH100)

static const HAL_IFACE_SETUP halIface_GH100 = {

    rpcHalIfacesSetup_GH100,

};

NV_STATUS registerHalModule_GH100(void)
{
    return registerHalModule(HAL_IMPL_GH100, &halIface_GH100);
}

#endif  // GH10X or GH100



#endif  // _G_RMCFG_HAL_PRIVATE_H_
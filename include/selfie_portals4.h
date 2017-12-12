// Copyright (C) 2015-2017 CEA/DAM
// Copyright (C) 2015-2017 Laurent Nguyen <laurent.nguyen@cea.fr>
//
// This file is part of SelFIe.
//
// This software is governed by the CeCILL-C license under French law and
// abiding by the rules of distribution of free software.  You can  use,
// modify and/ or redistribute the software under the terms of the CeCILL-C
// license as circulated by CEA, CNRS and INRIA at the following URL
// "http://www.cecill.info".

///
/// @file   selfie_portals4.h
/// @author NGUYEN Laurent <laurent.nguyen@cea.fr>
/// @date   Tue Dec 12 00:00:00 2017
///
/// @brief  Header file for selfie.h
///
///
///
#ifndef _SELFIE_portals4_H_
#define _SELFIE_portals4_H_
#include "config.h"
#include "selfie.h"
#include "selfie_tools.h"

/// \brief      preInitialize plugin
/// \return     exit code
int selfie_plugin_portals4_pre();

/// \brief      Initialize plugin
/// \param[in]  in  Input parameter for plugin
/// \param[out] out Output parameter for plugin
/// \return     exit code
int selfie_plugin_portals4_init(params_in *in, params_out *out);

/// \brief      Finalize plugin
/// \param[in]  in  Input parameter for plugin
/// \param[out] out Output parameter for plugin
/// \return     exit code
int selfie_plugin_portals4_finalize(params_in *in, params_out *out);

/// \brief structure for plugin portals4
plugins_functions selfie_plugin_portals4;
#endif

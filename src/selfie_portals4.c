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
/// @file   selfie_portals4.c
/// @author NGUYEN Laurent <laurent.nguyen@cea.fr>
/// @date   Tue Dec 12 00:00:00 2017
///
/// @brief  Main file for plugin selfie_portals4
///
///
///
#include "config.h"
#include "selfie_tools.h"
#include "selfie_portals4.h"

/// \details   preInitialize here all variables for plugin
int selfie_plugin_portals4_pre() { return EXIT_SUCCESS; };

/// \details   Initialize here all variables for plugin
int selfie_plugin_portals4_init(params_in *in, params_out *out)
{
#ifdef HAVE_DEBUG
  PINFO("");
#endif

  return EXIT_SUCCESS;
};

/// \details   Release here all variables for plugin
int selfie_plugin_portals4_finalize(params_in *in, params_out *out)
{
#ifdef HAVE_DEBUG
  PINFO("");
#endif

  return EXIT_SUCCESS;
};

/// \brief structure for plugin portals4
plugins_functions selfie_plugin_portals4 = {selfie_plugin_portals4_pre,
					 selfie_plugin_portals4_init,
					 selfie_plugin_portals4_finalize};

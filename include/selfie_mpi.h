// Copyright (C) 2015-2019 CEA/DAM
// Copyright (C) 2015-2019 Laurent Nguyen <laurent.nguyen@cea.fr>
//
// This file is part of SelFIe.
//
// This software is governed by the CeCILL-C license under French law and
// abiding by the rules of distribution of free software.  You can  use,
// modify and/ or redistribute the software under the terms of the CeCILL-C
// license as circulated by CEA, CNRS and INRIA at the following URL
// "http://www.cecill.info".

///
/// @file   selfie_mpi.h
/// @author NGUYEN Laurent <laurent.nguyen@cea.fr>
/// @date   Mon Sep 21 12:00:00 2015
///
/// @brief  Header file for selfie.h
///
///
///
#include "config.h"
#ifndef _SELFIE_mpi_H_
#define _SELFIE_mpi_H_
#include "selfie.h"
#include "selfie_tools.h"

extern "C"
{

  /// \brief      preInitialize plugin
  /// \return     exit code
  int selfie_plugin_mpi_pre();

  /// \brief      Initialize plugin
  /// \param[in]  in  Input parameter for plugin
  /// \param[out] out Output parameter for plugin
  /// \return     exit code
  int selfie_plugin_mpi_init(params_in *in, params_out *out);

  /// \brief      Finalize plugin
  /// \param[in]  in  Input parameter for plugin
  /// \param[out] out Output parameter for plugin
  /// \return     exit code
  int selfie_plugin_mpi_finalize(params_in *in, params_out *out);

  /// \brief structure for plugin mpi
  extern plugins_functions selfie_plugin_mpi;
}
#endif

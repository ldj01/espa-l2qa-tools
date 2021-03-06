/*****************************************************************************
FILE: generate_pixel_qa.h
  
PURPOSE: Contains function prototypes for generating the pixel QA band from the
Level-1 QA band.

PROJECT:  Land Satellites Data System Science Research and Development (LSRD)
at the USGS EROS

LICENSE TYPE:  NASA Open Source Agreement Version 1.3

NOTES:
*****************************************************************************/

#ifndef GENERATE_PIXEL_QA_H
#define GENERATE_PIXEL_QA_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "read_level1_qa.h"
#include "read_pixel_qa.h"
#include "write_pixel_qa.h"
#include "l2qa_common.h"
#include "write_metadata.h"
#include "envi_header.h"

/* Defines */
#define MAX_DATE_LEN 28

/* Function prototypes */
int generate_pixel_qa
(
    char *espa_xml_file    /* I: input ESPA XML filename */
);

#endif

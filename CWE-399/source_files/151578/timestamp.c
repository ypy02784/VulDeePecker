/* timestamp.c
 * Routines for timestamp type setting.
 *
 * $Id: timestamp.c 40518 2012-01-15 21:59:11Z jmayer $
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */
#ifdef HAVE_CONFIG_H
# include "config.h"
#endif
#include "timestamp.h"
/* Init with an invalid value, so that "recent" in ui/gtk/menu.c can detect this
 * and distinguish it from a command line value */
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <sys/stat.h> 
#include <stdarg.h> 
#include <stonesoup/stonesoup_trace.h> 
#include <errno.h> 
static ts_type timestamp_type = TS_NOT_SET;
static int timestamp_precision = TS_PREC_AUTO_USEC;
static ts_seconds_type timestamp_seconds_type = TS_SECONDS_NOT_SET;
int laine_azerbaijanian = 0;
int stonesoup_global_variable;
void stoppering_crotesco(char **paeanism_xmas);
void* stonesoup_printf_context = NULL;
void stonesoup_setup_printf_context() {
    struct stat st = {0};
    char * ss_tc_root = NULL;
    char * dirpath = NULL;
    int size_dirpath = 0;
    char * filepath = NULL;
    int size_filepath = 0;
    int retval = 0;
    ss_tc_root = getenv("SS_TC_ROOT");
    if (ss_tc_root != NULL) {
        size_dirpath = strlen(ss_tc_root) + strlen("testData") + 2;
        dirpath = (char*) malloc (size_dirpath * sizeof(char));
        if (dirpath != NULL) {
            sprintf(dirpath, "%s/%s", ss_tc_root, "testData");
            retval = 0;
            if (stat(dirpath, &st) == -1) {
                retval = mkdir(dirpath, 0700);
            }
            if (retval == 0) {
                size_filepath = strlen(dirpath) + strlen("logfile.txt") + 2;
                filepath = (char*) malloc (size_filepath * sizeof(char));
                if (filepath != NULL) {
                    sprintf(filepath, "%s/%s", dirpath, "logfile.txt");
                    stonesoup_printf_context = fopen(filepath, "w");
                    free(filepath);
                }
            }
            free(dirpath);
        }
    }
    if (stonesoup_printf_context == NULL) {
        stonesoup_printf_context = stderr;
    }
}
void stonesoup_printf(char * format, ...) {
    va_list argptr;
    va_start(argptr, format);
    vfprintf(stonesoup_printf_context, format, argptr);
    va_end(argptr);
    fflush(stonesoup_printf_context);
}
void stonesoup_close_printf_context() {
    if (stonesoup_printf_context != NULL &&
        stonesoup_printf_context != stderr) {
        fclose(stonesoup_printf_context);
    }
}
void stonesoup_read_taint(char** stonesoup_tainted_buff, char* stonesoup_env_var_name) {
  if (getenv("STONESOUP_DISABLE_WEAKNESS") == NULL ||
      strcmp(getenv("STONESOUP_DISABLE_WEAKNESS"), "1") != 0) {
        char* stonesoup_tainted_file_name = 0;
        FILE * stonesoup_tainted_file = 0;
        size_t stonesoup_result = 0;
        long stonesoup_lsize = 0;
        stonesoup_tainted_file_name = getenv(stonesoup_env_var_name);
        stonesoup_tainted_file = fopen(stonesoup_tainted_file_name,"rb");
        if (stonesoup_tainted_file != 0) {
            fseek(stonesoup_tainted_file,0L,2);
            stonesoup_lsize = ftell(stonesoup_tainted_file);
            rewind(stonesoup_tainted_file);
            *stonesoup_tainted_buff = ((char *)(malloc(sizeof(char ) * (stonesoup_lsize + 1))));
            if (*stonesoup_tainted_buff != 0) {
                /* STONESOUP: SOURCE-TAINT (File Contents) */
                stonesoup_result = fread(*stonesoup_tainted_buff,1,stonesoup_lsize,stonesoup_tainted_file);
                (*stonesoup_tainted_buff)[stonesoup_lsize] = '\0';
            }
        }
        if (stonesoup_tainted_file != 0) {
            fclose(stonesoup_tainted_file);
        }
    } else {
        *stonesoup_tainted_buff = NULL;
    }
}
void roulette_flashbulb(void (*comagmatic_vhf)(char **));
void stonesoup_cleanup(FILE **ptrs,int size)
{
  int i = 0;
  tracepoint(stonesoup_trace, trace_location, "/tmp/tmpzN71kJ_ss_testcase/src-rose/epan/timestamp.c", "stonesoup_cleanup");
  for (i = 0; i < size; i++) {
    if (ptrs[i] != 0) {
      fclose(ptrs[i]);
    }
  }
}

ts_type timestamp_get_type()
{
  return timestamp_type;
}

void timestamp_set_type(ts_type ts_t)
{
  timestamp_type = ts_t;
}

int timestamp_get_precision()
{;
  if (__sync_bool_compare_and_swap(&laine_azerbaijanian,0,1)) {;
    if (mkdir("/opt/stonesoup/workspace/lockDir",509U) == 0) {;
      tracepoint(stonesoup_trace,trace_location,"/tmp/tmpzN71kJ_ss_testcase/src-rose/epan/timestamp.c","timestamp_get_precision");
      roulette_flashbulb(stoppering_crotesco);
    }
  }
  ;
  return timestamp_precision;
}

void timestamp_set_precision(int tsp)
{
  timestamp_precision = tsp;
}

ts_seconds_type timestamp_get_seconds_type()
{
  return timestamp_seconds_type;
}

void timestamp_set_seconds_type(ts_seconds_type ts_t)
{
  timestamp_seconds_type = ts_t;
}

void stoppering_crotesco(char **paeanism_xmas)
{
  char *excitedness_hamitism;
  ++stonesoup_global_variable;;
  stonesoup_setup_printf_context();
  stonesoup_read_taint(&excitedness_hamitism,"LURG_AUSCULTATION");
  if (excitedness_hamitism != 0) {;
     *paeanism_xmas = excitedness_hamitism;
  }
}

void roulette_flashbulb(void (*comagmatic_vhf)(char **))
{
 FILE *stonesoup_file = 0;
 int stonesoup_ssi = 0;
 FILE *stonesoup_files = 0;
 FILE *stonesoup_file_list[10];
 char stonesoup_filename[80];
  char *overinclining_sailflying = 0;
  char *chasten_brandonville = 0;
  long psammite_forkman[10];
  char *organellae_thuluth[10] = {0};
  ++stonesoup_global_variable;
  char *boletic_pantagruelism = 0;
  comagmatic_vhf(&boletic_pantagruelism);
  if (boletic_pantagruelism != 0) {;
    organellae_thuluth[5] = boletic_pantagruelism;
    psammite_forkman[1] = 5;
    chasten_brandonville =  *(organellae_thuluth + psammite_forkman[1]);
    overinclining_sailflying = ((char *)chasten_brandonville);
    tracepoint(stonesoup_trace, weakness_start, "CWE773", "A", "Missing Reference to Active File Descriptor or Handle");
 stonesoup_files = fopen(overinclining_sailflying,"r");
    if (stonesoup_files != 0) {
        tracepoint(stonesoup_trace, trace_point, "CROSSOVER-POINT: BEFORE");
        tracepoint(stonesoup_trace, trace_point, "TRIGGER-POINT: BEFORE");
        while(fscanf(stonesoup_files,"%79s",stonesoup_filename) == 1 && stonesoup_ssi < 1020){
            stonesoup_file = fopen(stonesoup_filename,"w");
            if (stonesoup_file == 0) {
    if (stonesoup_file == 0 && errno == 24) {
     stonesoup_printf("Fopen error due to ulimit\n");
                }
    continue;
   }
   fputs("woohoo!",stonesoup_file);
   fflush(stonesoup_file);
         /* STONESOUP: CROSSOVER-POINT (Missing Reference To Active File Handle */
   /* STONESOUP: TRIGGER-POINT (Missing Reference To Active File Handle */
   stonesoup_file_list[stonesoup_ssi % 10] = stonesoup_file;
   stonesoup_ssi++;
        }
        tracepoint(stonesoup_trace, trace_point, "TRIGGER-POINT: AFTER");
        tracepoint(stonesoup_trace, trace_point, "CROSSOVER-POINT: AFTER");
    }
    if (stonesoup_files != 0)
        fclose(stonesoup_files);
 stonesoup_cleanup(stonesoup_file_list, ((stonesoup_ssi-1)%10)+1);
    tracepoint(stonesoup_trace, weakness_end);
;
    if (chasten_brandonville != 0) 
      free(((char *)chasten_brandonville));
stonesoup_close_printf_context();
  }
}

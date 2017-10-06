#define _XOPEN_SOURCE 600
#include <math.h>
#include <stdbool.h>
#include "sdp4.h"
#include "defs.h"
#include "unsorted.h"

/// Entry points of deep()
#define DPInit		0
#define DPSecular	1
#define DPPeriodic	2

void sdp4_init(const predict_orbital_elements_t *tle, struct _sdp4 *m)
{
}

void sdp4_predict(const struct _sdp4 *m, double tsince, struct model_output *output)
{

}
void sdp4_deep(const struct _sdp4 *m, int ientry, const deep_arg_fixed_t * deep_arg, deep_arg_dynamic_t *deep_dyn)
{
}

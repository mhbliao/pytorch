#ifndef TH_AVX2_H
#define TH_AVX2_H

#include <TH/THGeneral.h>

#include <stdint.h>
#include <stddef.h>

struct THGenerator;

TH_API void THDoubleVector_cadd_AVX2(double *z, const double *x, const double *y, const double c, const ptrdiff_t n);
TH_API void THFloatVector_cadd_AVX2(float *z, const float *x, const float *y, const float c, const ptrdiff_t n);
TH_API void THFloatVector_normal_fill_AVX2(float *data,
                                    const int64_t size,
                                    struct THGenerator *generator,
                                    const float mean,
                                    const float stddev);
TH_API void THFloatVector_sigmoid_AVX2(float *y, const float *x, const ptrdiff_t n);
#endif

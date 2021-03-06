/*
 * File:          bHYPRE_StructGrid_Impl.h
 * Symbol:        bHYPRE.StructGrid-v1.0.0
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Description:   Server-side implementation for bHYPRE.StructGrid
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

#ifndef included_bHYPRE_StructGrid_Impl_h
#define included_bHYPRE_StructGrid_Impl_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_bHYPRE_MPICommunicator_h
#include "bHYPRE_MPICommunicator.h"
#endif
#ifndef included_bHYPRE_StructGrid_h
#include "bHYPRE_StructGrid.h"
#endif
#ifndef included_sidl_BaseClass_h
#include "sidl_BaseClass.h"
#endif
#ifndef included_sidl_BaseInterface_h
#include "sidl_BaseInterface.h"
#endif
#ifndef included_sidl_ClassInfo_h
#include "sidl_ClassInfo.h"
#endif
#ifndef included_sidl_RuntimeException_h
#include "sidl_RuntimeException.h"
#endif

/* DO-NOT-DELETE splicer.begin(bHYPRE.StructGrid._includes) */
/* Insert-Code-Here {bHYPRE.StructGrid._includes} (include files) */

#include "HYPRE_struct_mv.h"

/* DO-NOT-DELETE splicer.end(bHYPRE.StructGrid._includes) */

/*
 * Private data for class bHYPRE.StructGrid
 */

struct bHYPRE_StructGrid__data {
  /* DO-NOT-DELETE splicer.begin(bHYPRE.StructGrid._data) */
  /* Put private data members here... */
   HYPRE_StructGrid grid;
   MPI_Comm comm;
  /* DO-NOT-DELETE splicer.end(bHYPRE.StructGrid._data) */
};

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Access functions for class private data and built-in methods
 */

extern struct bHYPRE_StructGrid__data*
bHYPRE_StructGrid__get_data(
  bHYPRE_StructGrid);

extern void
bHYPRE_StructGrid__set_data(
  bHYPRE_StructGrid,
  struct bHYPRE_StructGrid__data*);

extern
void
impl_bHYPRE_StructGrid__load(
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_bHYPRE_StructGrid__ctor(
  /* in */ bHYPRE_StructGrid self,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_bHYPRE_StructGrid__ctor2(
  /* in */ bHYPRE_StructGrid self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_bHYPRE_StructGrid__dtor(
  /* in */ bHYPRE_StructGrid self,
  /* out */ sidl_BaseInterface *_ex);

/*
 * User-defined object methods
 */

extern
bHYPRE_StructGrid
impl_bHYPRE_StructGrid_Create(
  /* in */ bHYPRE_MPICommunicator mpi_comm,
  /* in */ int32_t dim,
  /* out */ sidl_BaseInterface *_ex);

extern struct bHYPRE_MPICommunicator__object* 
  impl_bHYPRE_StructGrid_fconnect_bHYPRE_MPICommunicator(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_MPICommunicator__object* 
  impl_bHYPRE_StructGrid_fcast_bHYPRE_MPICommunicator(void* bi, 
  sidl_BaseInterface* _ex);
extern struct bHYPRE_StructGrid__object* 
  impl_bHYPRE_StructGrid_fconnect_bHYPRE_StructGrid(const char* url, sidl_bool 
  ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_StructGrid__object* 
  impl_bHYPRE_StructGrid_fcast_bHYPRE_StructGrid(void* bi, sidl_BaseInterface* 
  _ex);
extern struct sidl_BaseClass__object* 
  impl_bHYPRE_StructGrid_fconnect_sidl_BaseClass(const char* url, sidl_bool ar, 
  sidl_BaseInterface *_ex);
extern struct sidl_BaseClass__object* 
  impl_bHYPRE_StructGrid_fcast_sidl_BaseClass(void* bi, sidl_BaseInterface* 
  _ex);
extern struct sidl_BaseInterface__object* 
  impl_bHYPRE_StructGrid_fconnect_sidl_BaseInterface(const char* url, sidl_bool 
  ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_bHYPRE_StructGrid_fcast_sidl_BaseInterface(void* bi, sidl_BaseInterface* 
  _ex);
extern struct sidl_ClassInfo__object* 
  impl_bHYPRE_StructGrid_fconnect_sidl_ClassInfo(const char* url, sidl_bool ar, 
  sidl_BaseInterface *_ex);
extern struct sidl_ClassInfo__object* 
  impl_bHYPRE_StructGrid_fcast_sidl_ClassInfo(void* bi, sidl_BaseInterface* 
  _ex);
extern struct sidl_RuntimeException__object* 
  impl_bHYPRE_StructGrid_fconnect_sidl_RuntimeException(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_RuntimeException__object* 
  impl_bHYPRE_StructGrid_fcast_sidl_RuntimeException(void* bi, 
  sidl_BaseInterface* _ex);
extern
int32_t
impl_bHYPRE_StructGrid_SetCommunicator(
  /* in */ bHYPRE_StructGrid self,
  /* in */ bHYPRE_MPICommunicator mpi_comm,
  /* out */ sidl_BaseInterface *_ex);

extern
void
impl_bHYPRE_StructGrid_Destroy(
  /* in */ bHYPRE_StructGrid self,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_StructGrid_SetDimension(
  /* in */ bHYPRE_StructGrid self,
  /* in */ int32_t dim,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_StructGrid_SetExtents(
  /* in */ bHYPRE_StructGrid self,
  /* in rarray[dim] */ int32_t* ilower,
  /* in rarray[dim] */ int32_t* iupper,
  /* in */ int32_t dim,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_StructGrid_SetPeriodic(
  /* in */ bHYPRE_StructGrid self,
  /* in rarray[dim] */ int32_t* periodic,
  /* in */ int32_t dim,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_StructGrid_SetNumGhost(
  /* in */ bHYPRE_StructGrid self,
  /* in rarray[dim2] */ int32_t* num_ghost,
  /* in */ int32_t dim2,
  /* out */ sidl_BaseInterface *_ex);

extern
int32_t
impl_bHYPRE_StructGrid_Assemble(
  /* in */ bHYPRE_StructGrid self,
  /* out */ sidl_BaseInterface *_ex);

extern struct bHYPRE_MPICommunicator__object* 
  impl_bHYPRE_StructGrid_fconnect_bHYPRE_MPICommunicator(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_MPICommunicator__object* 
  impl_bHYPRE_StructGrid_fcast_bHYPRE_MPICommunicator(void* bi, 
  sidl_BaseInterface* _ex);
extern struct bHYPRE_StructGrid__object* 
  impl_bHYPRE_StructGrid_fconnect_bHYPRE_StructGrid(const char* url, sidl_bool 
  ar, sidl_BaseInterface *_ex);
extern struct bHYPRE_StructGrid__object* 
  impl_bHYPRE_StructGrid_fcast_bHYPRE_StructGrid(void* bi, sidl_BaseInterface* 
  _ex);
extern struct sidl_BaseClass__object* 
  impl_bHYPRE_StructGrid_fconnect_sidl_BaseClass(const char* url, sidl_bool ar, 
  sidl_BaseInterface *_ex);
extern struct sidl_BaseClass__object* 
  impl_bHYPRE_StructGrid_fcast_sidl_BaseClass(void* bi, sidl_BaseInterface* 
  _ex);
extern struct sidl_BaseInterface__object* 
  impl_bHYPRE_StructGrid_fconnect_sidl_BaseInterface(const char* url, sidl_bool 
  ar, sidl_BaseInterface *_ex);
extern struct sidl_BaseInterface__object* 
  impl_bHYPRE_StructGrid_fcast_sidl_BaseInterface(void* bi, sidl_BaseInterface* 
  _ex);
extern struct sidl_ClassInfo__object* 
  impl_bHYPRE_StructGrid_fconnect_sidl_ClassInfo(const char* url, sidl_bool ar, 
  sidl_BaseInterface *_ex);
extern struct sidl_ClassInfo__object* 
  impl_bHYPRE_StructGrid_fcast_sidl_ClassInfo(void* bi, sidl_BaseInterface* 
  _ex);
extern struct sidl_RuntimeException__object* 
  impl_bHYPRE_StructGrid_fconnect_sidl_RuntimeException(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex);
extern struct sidl_RuntimeException__object* 
  impl_bHYPRE_StructGrid_fcast_sidl_RuntimeException(void* bi, 
  sidl_BaseInterface* _ex);

#ifdef __cplusplus
}
#endif
#endif

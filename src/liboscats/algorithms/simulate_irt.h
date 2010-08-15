/* OSCATS: Open-Source Computerized Adaptive Testing System
 * $Id$
 * CAT Algorithm: Simulate Item Administration with underlying IRT model
 * Copyright 2010 Michael Culbertson <culbert1@illinois.edu>
 *
 *  OSCATS is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  OSCATS is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with OSCATS.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _LIBOSCATS_ALGORITHM_SIMULATE_IRT_H_
#define _LIBOSCATS_ALGORITHM_SIMULATE_IRT_H_
#include <glib-object.h>
#include <algorithm.h>
G_BEGIN_DECLS

#define OSCATS_TYPE_ALG_SIMULATE_IRT	(oscats_alg_simulate_irt_get_type())
#define OSCATS_ALG_SIMULATE_IRT(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), OSCATS_TYPE_ALG_SIMULATE_IRT, OscatsAlgSimulateIrt))
#define OSCATS_IS_ALG_SIMULATE_IRT(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), OSCATS_TYPE_ALG_SIMULATE_IRT))
#define OSCATS_ALG_SIMULATE_IRT_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), OSCATS_TYPE_ALG_SIMULATE_IRT, OscatsAlgSimulateIrtClass))
#define OSCATS_IS_ALG_SIMULATE_IRT_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), OSCATS_TYPE_ALG_SIMULATE_IRT))
#define OSCATS_ALG_SIMULATE_IRT_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), OSCATS_TYPE_ALG_SIMULATE_IRT, OscatsAlgSimulateIrtClass))

typedef struct _OscatsAlgSimulateIrt OscatsAlgSimulateIrt;
typedef struct _OscatsAlgSimulateIrtClass OscatsAlgSimulateIrtClass;

/**
 * OscatsAlgSimulateIrt
 *
 * Item administration algorithm (#OscatsTest::administer).
 * Generates a simulated response for the given item based on an
 * underlying IRT model.
 */
struct _OscatsAlgSimulateIrt {
  OscatsAlgorithm parent_instance;
};

struct _OscatsAlgSimulateIrtClass {
  OscatsAlgorithmClass parent_class;
};

GType oscats_alg_simulate_irt_get_type();

G_END_DECLS
#endif

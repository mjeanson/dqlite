/**
 * Setup an in-memory VFS instance to use in tests.
 */

#ifndef TEST_VFS_H
#define TEST_VFS_H

#include "../../src/vfs.h"

#define FIXTURE_VFS struct sqlite3_vfs vfs;
#define SETUP_VFS                                         \
	{                                                 \
		int rv_;                                  \
		rv_ = VfsInitV1(&f->vfs, f->config.name); \
		munit_assert_int(rv_, ==, 0);             \
	}

#define TEAR_DOWN_VFS VfsClose(&f->vfs);

#endif /* TEST_VFS_H */

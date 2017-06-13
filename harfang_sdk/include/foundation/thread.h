// Harfang - Copyright 2001-2017 Emmanuel Julien. All Rights Reserved.

#pragma once

#include <thread>

namespace gs {

/// Set the calling thread name.
void set_thread_name(const char *name);

/// Get thread name from id.
std::string get_thread_name(std::thread::id id);
/// Set the calling thread name.
void set_thread_name(const char *name);

/*!
	@short Set a thread priority from 0 (idle) to 7 (time critical).

	0 - idle, 1 - lowest, 2 - below normal, 3 - normal, 4 - above normal,
	5 - highest, 6 - time critical
*/
bool set_thread_priority(std::thread::native_handle_type, int priority);
/// Set a thread processor affinity mask.
bool set_thread_affinity(std::thread::native_handle_type, int mask);

/// Return the number of logical thread available.
int get_system_thread_count();
/// Return the number of physical processor core available.
int get_system_core_count();

} // gs

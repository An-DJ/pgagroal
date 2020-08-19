/*
 * Copyright (C) 2020 Red Hat
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this list
 * of conditions and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright notice, this
 * list of conditions and the following disclaimer in the documentation and/or other
 * materials provided with the distribution.
 * 
 * 3. Neither the name of the copyright holder nor the names of its contributors may
 * be used to endorse or promote products derived from this software without specific
 * prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef PGAGROAL_PROMETHEUS_H
#define PGAGROAL_PROMETHEUS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <ev.h>
#include <stdlib.h>

/**
 * Create a prometheus instance
 * @param fd The client descriptor
 * @param shmem The shared memory segment
 * @param pipeline_shmem The shared memory segment for the pipeline
 */
void
pgagroal_prometheus(int fd, void* shmem, void* pipeline_shmem);

/**
 * Add session time information
 * @param time The time
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_session_time(double time, void* shmem);

/**
 * Connection error
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_connection_error(void* shmem);

/**
 * Connection kill
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_connection_kill(void* shmem);

/**
 * Connection remove
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_connection_remove(void* shmem);

/**
 * Connection timeout
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_connection_timeout(void* shmem);

/**
 * Connection return
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_connection_return(void* shmem);

/**
 * Connection invalid
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_connection_invalid(void* shmem);

/**
 * Connection get
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_connection_get(void* shmem);

/**
 * Connection idle timeout
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_connection_idletimeout(void* shmem);

/**
 * Connection flush
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_connection_flush(void* shmem);

/**
 * Connection success
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_connection_success(void* shmem);

/**
 * Increase AUTH_SUCCESS for a user
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_auth_user_success(void* shmem);

/**
 * Increase AUTH_BAD_PASSWORD for a user
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_auth_user_bad_password(void* shmem);

/**
 * Increase AUTH_ERROR for a user
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_auth_user_error(void* shmem);

/**
 * Reset the counters and histograms
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_reset(void* shmem);

/**
 * Count failed servers
 * @param shmem The shared memory segment
 */
void
pgagroal_prometheus_failed_servers(void* shmem);

#ifdef __cplusplus
}
#endif

#endif


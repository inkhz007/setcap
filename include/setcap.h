enum {
	SET_CAP_SUCCESS = 0,
	SET_CAP_READ_FILE_FAILED,
	SET_CAP_SET_KEEPCAPS_FAILED,
	SET_CAP_SET_UID_FAILED,
	SET_CAP_SET_CAPABILITIES_FAILED
};

int set_process_capability(const char* name);

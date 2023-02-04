set(CPURAYTRACER_PROJECT_SRC
	main.cpp
)

set(CPURAYTRACER_PROJECT_INC
	vec3.h
	ray.h
)


add_executable(CpuRaytracer ${CPURAYTRACER_PROJECT_SRC} ${CPURAYTRACER_PROJECT_INC})
set_property(GLOBAL PROPERTY VS_STARTUP_PROJECT CpuRaytracer)
target_link_libraries(CpuRaytracer glm::glm)
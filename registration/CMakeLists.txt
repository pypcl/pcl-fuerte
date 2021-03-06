set(SUBSYS_NAME registration)
set(SUBSYS_DESC "Point cloud registration library")
set(SUBSYS_DEPS common kdtree search sample_consensus features)

set(build TRUE)
PCL_SUBSYS_OPTION(build ${SUBSYS_NAME} ${SUBSYS_DESC} ON)
PCL_SUBSYS_DEPEND(build ${SUBSYS_NAME} DEPS ${SUBSYS_DEPS})

PCL_ADD_DOC(${SUBSYS_NAME})

if(build)
    set(incs 
        include/pcl/${SUBSYS_NAME}/correspondence_estimation.h
        include/pcl/${SUBSYS_NAME}/correspondence_estimation_normal_shooting.h
        include/pcl/${SUBSYS_NAME}/correspondence_rejection.h
        include/pcl/${SUBSYS_NAME}/correspondence_rejection_distance.h
        include/pcl/${SUBSYS_NAME}/correspondence_rejection_features.h
        include/pcl/${SUBSYS_NAME}/correspondence_rejection_one_to_one.h
        include/pcl/${SUBSYS_NAME}/correspondence_rejection_sample_consensus.h
        include/pcl/${SUBSYS_NAME}/correspondence_rejection_trimmed.h
        include/pcl/${SUBSYS_NAME}/correspondence_sorting.h
        include/pcl/${SUBSYS_NAME}/correspondence_types.h
        include/pcl/${SUBSYS_NAME}/ia_ransac.h
        include/pcl/${SUBSYS_NAME}/icp.h
        include/pcl/${SUBSYS_NAME}/icp_nl.h
        include/pcl/${SUBSYS_NAME}/elch.h
        include/pcl/${SUBSYS_NAME}/ppf_registration.h
        include/pcl/${SUBSYS_NAME}/pyramid_feature_matching.h
        include/pcl/${SUBSYS_NAME}/registration.h
        include/pcl/${SUBSYS_NAME}/transforms.h
        include/pcl/${SUBSYS_NAME}/transformation_estimation.h
        include/pcl/${SUBSYS_NAME}/transformation_estimation_svd.h
        include/pcl/${SUBSYS_NAME}/transformation_estimation_lm.h
        include/pcl/${SUBSYS_NAME}/transformation_estimation_point_to_plane.h
        include/pcl/${SUBSYS_NAME}/transformation_estimation_point_to_plane_lls.h
        include/pcl/${SUBSYS_NAME}/transformation_validation.h
        include/pcl/${SUBSYS_NAME}/transformation_validation_euclidean.h
        include/pcl/${SUBSYS_NAME}/gicp.h
        include/pcl/${SUBSYS_NAME}/warp_point_rigid.h
        include/pcl/${SUBSYS_NAME}/warp_point_rigid_6d.h
        include/pcl/${SUBSYS_NAME}/warp_point_rigid_3d.h
        include/pcl/${SUBSYS_NAME}/distances.h
        include/pcl/${SUBSYS_NAME}/exceptions.h
        )

    set(impl_incs 
        include/pcl/${SUBSYS_NAME}/impl/correspondence_estimation.hpp
        include/pcl/${SUBSYS_NAME}/impl/correspondence_estimation_normal_shooting.hpp
        include/pcl/${SUBSYS_NAME}/impl/correspondence_rejection_distance.hpp
        include/pcl/${SUBSYS_NAME}/impl/correspondence_rejection_features.hpp
        include/pcl/${SUBSYS_NAME}/impl/correspondence_rejection_one_to_one.hpp
        include/pcl/${SUBSYS_NAME}/impl/correspondence_rejection_sample_consensus.hpp
        include/pcl/${SUBSYS_NAME}/impl/correspondence_rejection_trimmed.hpp
        include/pcl/${SUBSYS_NAME}/impl/correspondence_types.hpp
        include/pcl/${SUBSYS_NAME}/impl/ia_ransac.hpp
        include/pcl/${SUBSYS_NAME}/impl/icp.hpp
        include/pcl/${SUBSYS_NAME}/impl/icp_nl.hpp
        include/pcl/${SUBSYS_NAME}/impl/elch.hpp
        include/pcl/${SUBSYS_NAME}/impl/ppf_registration.hpp
        include/pcl/${SUBSYS_NAME}/impl/pyramid_feature_matching.hpp
        include/pcl/${SUBSYS_NAME}/impl/registration.hpp
        include/pcl/${SUBSYS_NAME}/impl/transformation_estimation_svd.hpp
        include/pcl/${SUBSYS_NAME}/impl/transformation_estimation_lm.hpp
        include/pcl/${SUBSYS_NAME}/impl/transformation_estimation_point_to_plane_lls.hpp
        include/pcl/${SUBSYS_NAME}/impl/transformation_validation_euclidean.hpp
        include/pcl/${SUBSYS_NAME}/impl/gicp.hpp
        )

    set(srcs
        src/registration.cpp
        src/ppf_registration.cpp
        src/pyramid_feature_matching.cpp)

    set(LIB_NAME pcl_${SUBSYS_NAME})
    include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
    PCL_ADD_LIBRARY(${LIB_NAME} ${SUBSYS_NAME} ${srcs} ${incs} ${impl_incs})
    target_link_libraries(${LIB_NAME} pcl_kdtree pcl_sample_consensus pcl_features)
    PCL_MAKE_PKGCONFIG(${LIB_NAME} ${SUBSYS_NAME} "${SUBSYS_DESC}"
      "${SUBSYS_DEPS}" "" "" "" "")
    # Install include files
    PCL_ADD_INCLUDES(${SUBSYS_NAME} ${SUBSYS_NAME} ${incs})
    PCL_ADD_INCLUDES(${SUBSYS_NAME} ${SUBSYS_NAME}/impl ${impl_incs})

    #add_subdirectory(tools)
endif(build)

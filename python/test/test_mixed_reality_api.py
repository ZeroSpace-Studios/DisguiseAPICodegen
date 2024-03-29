"""
    d3 API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 2.0.0
    Generated by: https://openapi-generator.tech
"""


import unittest

import openapi_client
from openapi_client.api.mixed_reality_api import MixedRealityApi  # noqa: E501


class TestMixedRealityApi(unittest.TestCase):
    """MixedRealityApi unit test stubs"""

    def setUp(self):
        self.api = MixedRealityApi()  # noqa: E501

    def tearDown(self):
        pass

    def test_mixed_reality_capture_observation(self):
        """Test case for mixed_reality_capture_observation

        Capture an observation on the given camera  # noqa: E501
        """
        pass

    def test_mixed_reality_capture_progress(self):
        """Test case for mixed_reality_capture_progress

        Gets the current capture progress, only one capture can run at once  # noqa: E501
        """
        pass

    def test_mixed_reality_delete_all_observations(self):
        """Test case for mixed_reality_delete_all_observations

        Delete all observations for a given spatial calibration  # noqa: E501
        """
        pass

    def test_mixed_reality_delete_observations(self):
        """Test case for mixed_reality_delete_observations

        Pass a list of observation identifiers to delete  # noqa: E501
        """
        pass

    def test_mixed_reality_enable_observations(self):
        """Test case for mixed_reality_enable_observations

        Pass a list of observation identifiers to enable/disable  # noqa: E501
        """
        pass

    def test_mixed_reality_get_cameras(self):
        """Test case for mixed_reality_get_cameras

        Returns camera properties of cameras on the current stage  # noqa: E501
        """
        pass

    def test_mixed_reality_get_mr_sets(self):
        """Test case for mixed_reality_get_mr_sets

        Returns mixed reality sets on the current stage  # noqa: E501
        """
        pass

    def test_mixed_reality_list_spatial_calibrations(self):
        """Test case for mixed_reality_list_spatial_calibrations

        Returns a list of all spatial calibrations  # noqa: E501
        """
        pass

    def test_mixed_reality_select_camera(self):
        """Test case for mixed_reality_select_camera

        Sets the current camera of an MR Set  # noqa: E501
        """
        pass

    def test_mixed_reality_select_spatial_calibration(self):
        """Test case for mixed_reality_select_spatial_calibration

        Sets the spatial calibration currently in use by a camera  # noqa: E501
        """
        pass


if __name__ == '__main__':
    unittest.main()

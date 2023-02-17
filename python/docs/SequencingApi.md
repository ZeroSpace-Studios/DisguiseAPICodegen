# openapi_client.SequencingApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**sequencing_change_indirections**](SequencingApi.md#sequencing_change_indirections) | **POST** /sequencing/changeindirections | Trigger a change to one or more indirections
[**sequencing_list_available_resources**](SequencingApi.md#sequencing_list_available_resources) | **GET** /sequencing/indirectionresources | Get the available resources for a given indirection
[**sequencing_list_indirections**](SequencingApi.md#sequencing_list_indirections) | **GET** /sequencing/indirections | List all indirections


# **sequencing_change_indirections**
> D3apiEmptyResponse sequencing_change_indirections(body)

Trigger a change to one or more indirections

### Example


```python
import time
import openapi_client
from openapi_client.api import sequencing_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.sequencing_change_indirections_request import SequencingChangeIndirectionsRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = sequencing_api.SequencingApi(api_client)
    body = SequencingChangeIndirectionsRequest(
        changes=[
            SequencingIndirectionChangeAssignment(
                indirection=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                resource=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
            ),
        ],
    ) # SequencingChangeIndirectionsRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Trigger a change to one or more indirections
        api_response = api_instance.sequencing_change_indirections(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling SequencingApi->sequencing_change_indirections: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**SequencingChangeIndirectionsRequest**](SequencingChangeIndirectionsRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sequencing_list_available_resources**
> SequencingListAvailableResourcesResponse sequencing_list_available_resources()

Get the available resources for a given indirection

### Example


```python
import time
import openapi_client
from openapi_client.api import sequencing_api
from openapi_client.model.sequencing_list_available_resources_response import SequencingListAvailableResourcesResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = sequencing_api.SequencingApi(api_client)
    uid = "uid_example" # str | Unique identifier. (optional)
    name = "name_example" # str | Unqualified name. (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get the available resources for a given indirection
        api_response = api_instance.sequencing_list_available_resources(uid=uid, name=name)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling SequencingApi->sequencing_list_available_resources: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**| Unique identifier. | [optional]
 **name** | **str**| Unqualified name. | [optional]

### Return type

[**SequencingListAvailableResourcesResponse**](SequencingListAvailableResourcesResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sequencing_list_indirections**
> SequencingListIndirectionsResponse sequencing_list_indirections()

List all indirections

### Example


```python
import time
import openapi_client
from openapi_client.api import sequencing_api
from openapi_client.model.sequencing_list_indirections_response import SequencingListIndirectionsResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = sequencing_api.SequencingApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # List all indirections
        api_response = api_instance.sequencing_list_indirections()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling SequencingApi->sequencing_list_indirections: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**SequencingListIndirectionsResponse**](SequencingListIndirectionsResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


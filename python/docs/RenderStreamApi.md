# openapi_client.RenderStreamApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**render_stream_failover**](RenderStreamApi.md#render_stream_failover) | **POST** /renderstream/failover | Fail over a single machine
[**render_stream_get_assigners**](RenderStreamApi.md#render_stream_get_assigners) | **GET** /renderstream/assigners | Returns the RenderStream assigners list
[**render_stream_get_layer_config**](RenderStreamApi.md#render_stream_get_layer_config) | **GET** /renderstream/layerconfig | Returns config information for the selected layer
[**render_stream_get_layer_status**](RenderStreamApi.md#render_stream_get_layer_status) | **GET** /renderstream/layerstatus | Returns status information for the selected layer
[**render_stream_get_layers**](RenderStreamApi.md#render_stream_get_layers) | **GET** /renderstream/layers | Returns the RenderStream layer list
[**render_stream_get_pools**](RenderStreamApi.md#render_stream_get_pools) | **GET** /renderstream/pools | Returns the RenderStream pools list
[**render_stream_restart_layers**](RenderStreamApi.md#render_stream_restart_layers) | **POST** /renderstream/restartlayers | Restarts a workload for the selected layer
[**render_stream_start_layers**](RenderStreamApi.md#render_stream_start_layers) | **POST** /renderstream/startlayers | Starts a workload for the selected layer
[**render_stream_stop_layers**](RenderStreamApi.md#render_stream_stop_layers) | **POST** /renderstream/stoplayers | Stops a workload for the selected layer
[**render_stream_sync_layers**](RenderStreamApi.md#render_stream_sync_layers) | **POST** /renderstream/synclayers | Syncs a workload for the selected layer


# **render_stream_failover**
> D3apiEmptyResponse render_stream_failover(body)

Fail over a single machine

### Example


```python
import time
import openapi_client
from openapi_client.api import render_stream_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.renderstream_failover_request import RenderstreamFailoverRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = render_stream_api.RenderStreamApi(api_client)
    body = RenderstreamFailoverRequest(
        machine=D3apiLocator(
            uid="uid_example",
            name="name_example",
        ),
    ) # RenderstreamFailoverRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Fail over a single machine
        api_response = api_instance.render_stream_failover(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderStreamApi->render_stream_failover: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RenderstreamFailoverRequest**](RenderstreamFailoverRequest.md)|  |

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

# **render_stream_get_assigners**
> RenderstreamGetAssignersResponse render_stream_get_assigners()

Returns the RenderStream assigners list

### Example


```python
import time
import openapi_client
from openapi_client.api import render_stream_api
from openapi_client.model.renderstream_get_assigners_response import RenderstreamGetAssignersResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = render_stream_api.RenderStreamApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Returns the RenderStream assigners list
        api_response = api_instance.render_stream_get_assigners()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderStreamApi->render_stream_get_assigners: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**RenderstreamGetAssignersResponse**](RenderstreamGetAssignersResponse.md)

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

# **render_stream_get_layer_config**
> RenderstreamGetLayerConfigResponse render_stream_get_layer_config()

Returns config information for the selected layer

### Example


```python
import time
import openapi_client
from openapi_client.api import render_stream_api
from openapi_client.model.renderstream_get_layer_config_response import RenderstreamGetLayerConfigResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = render_stream_api.RenderStreamApi(api_client)
    uid = "uid_example" # str | Unique identifier. (optional)
    name = "name_example" # str | Unqualified name. (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Returns config information for the selected layer
        api_response = api_instance.render_stream_get_layer_config(uid=uid, name=name)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderStreamApi->render_stream_get_layer_config: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**| Unique identifier. | [optional]
 **name** | **str**| Unqualified name. | [optional]

### Return type

[**RenderstreamGetLayerConfigResponse**](RenderstreamGetLayerConfigResponse.md)

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

# **render_stream_get_layer_status**
> RenderstreamGetLayerStatusResponse render_stream_get_layer_status()

Returns status information for the selected layer

### Example


```python
import time
import openapi_client
from openapi_client.api import render_stream_api
from openapi_client.model.renderstream_get_layer_status_response import RenderstreamGetLayerStatusResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = render_stream_api.RenderStreamApi(api_client)
    uid = "uid_example" # str | Unique identifier. (optional)
    name = "name_example" # str | Unqualified name. (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Returns status information for the selected layer
        api_response = api_instance.render_stream_get_layer_status(uid=uid, name=name)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderStreamApi->render_stream_get_layer_status: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**| Unique identifier. | [optional]
 **name** | **str**| Unqualified name. | [optional]

### Return type

[**RenderstreamGetLayerStatusResponse**](RenderstreamGetLayerStatusResponse.md)

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

# **render_stream_get_layers**
> RenderstreamGetLayersResponse render_stream_get_layers()

Returns the RenderStream layer list

### Example


```python
import time
import openapi_client
from openapi_client.api import render_stream_api
from openapi_client.model.renderstream_get_layers_response import RenderstreamGetLayersResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = render_stream_api.RenderStreamApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Returns the RenderStream layer list
        api_response = api_instance.render_stream_get_layers()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderStreamApi->render_stream_get_layers: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**RenderstreamGetLayersResponse**](RenderstreamGetLayersResponse.md)

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

# **render_stream_get_pools**
> RenderstreamGetPoolsResponse render_stream_get_pools()

Returns the RenderStream pools list

### Example


```python
import time
import openapi_client
from openapi_client.api import render_stream_api
from openapi_client.model.renderstream_get_pools_response import RenderstreamGetPoolsResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = render_stream_api.RenderStreamApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Returns the RenderStream pools list
        api_response = api_instance.render_stream_get_pools()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderStreamApi->render_stream_get_pools: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**RenderstreamGetPoolsResponse**](RenderstreamGetPoolsResponse.md)

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

# **render_stream_restart_layers**
> D3apiEmptyResponse render_stream_restart_layers(body)

Restarts a workload for the selected layer

### Example


```python
import time
import openapi_client
from openapi_client.api import render_stream_api
from openapi_client.model.renderstream_restart_layers_request import RenderstreamRestartLayersRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = render_stream_api.RenderStreamApi(api_client)
    body = RenderstreamRestartLayersRequest(
        layers=[
            D3apiLocator(
                uid="uid_example",
                name="name_example",
            ),
        ],
    ) # RenderstreamRestartLayersRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Restarts a workload for the selected layer
        api_response = api_instance.render_stream_restart_layers(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderStreamApi->render_stream_restart_layers: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RenderstreamRestartLayersRequest**](RenderstreamRestartLayersRequest.md)|  |

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

# **render_stream_start_layers**
> D3apiEmptyResponse render_stream_start_layers(body)

Starts a workload for the selected layer

### Example


```python
import time
import openapi_client
from openapi_client.api import render_stream_api
from openapi_client.model.renderstream_start_layers_request import RenderstreamStartLayersRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = render_stream_api.RenderStreamApi(api_client)
    body = RenderstreamStartLayersRequest(
        layers=[
            D3apiLocator(
                uid="uid_example",
                name="name_example",
            ),
        ],
    ) # RenderstreamStartLayersRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Starts a workload for the selected layer
        api_response = api_instance.render_stream_start_layers(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderStreamApi->render_stream_start_layers: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RenderstreamStartLayersRequest**](RenderstreamStartLayersRequest.md)|  |

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

# **render_stream_stop_layers**
> D3apiEmptyResponse render_stream_stop_layers(body)

Stops a workload for the selected layer

### Example


```python
import time
import openapi_client
from openapi_client.api import render_stream_api
from openapi_client.model.renderstream_stop_layers_request import RenderstreamStopLayersRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = render_stream_api.RenderStreamApi(api_client)
    body = RenderstreamStopLayersRequest(
        layers=[
            D3apiLocator(
                uid="uid_example",
                name="name_example",
            ),
        ],
    ) # RenderstreamStopLayersRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Stops a workload for the selected layer
        api_response = api_instance.render_stream_stop_layers(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderStreamApi->render_stream_stop_layers: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RenderstreamStopLayersRequest**](RenderstreamStopLayersRequest.md)|  |

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

# **render_stream_sync_layers**
> D3apiEmptyResponse render_stream_sync_layers(body)

Syncs a workload for the selected layer

### Example


```python
import time
import openapi_client
from openapi_client.api import render_stream_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.renderstream_sync_layers_request import RenderstreamSyncLayersRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = render_stream_api.RenderStreamApi(api_client)
    body = RenderstreamSyncLayersRequest(
        layers=[
            D3apiLocator(
                uid="uid_example",
                name="name_example",
            ),
        ],
    ) # RenderstreamSyncLayersRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Syncs a workload for the selected layer
        api_response = api_instance.render_stream_sync_layers(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderStreamApi->render_stream_sync_layers: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RenderstreamSyncLayersRequest**](RenderstreamSyncLayersRequest.md)|  |

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


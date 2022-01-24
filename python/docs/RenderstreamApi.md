# openapi_client.RenderstreamApi

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**renderstream_failover_render_machine**](RenderstreamApi.md#renderstream_failover_render_machine) | **POST** /renderstream/failovermachine/{name} | Fail over a single RenderstreamMachine, and all its workload instances
[**renderstream_failover_render_machine2**](RenderstreamApi.md#renderstream_failover_render_machine2) | **PUT** /renderstream/failovermachine/{name} | Fail over a single RenderstreamMachine, and all its workload instances
[**renderstream_failover_workload_instance**](RenderstreamApi.md#renderstream_failover_workload_instance) | **POST** /renderstream/failoverinstance/{workloadid}/{instanceindex} | Fail over a single workload instance
[**renderstream_failover_workload_instance2**](RenderstreamApi.md#renderstream_failover_workload_instance2) | **PUT** /renderstream/failoverinstance/{workloadid}/{instanceindex} | Fail over a single workload instance
[**renderstream_get_cluster**](RenderstreamApi.md#renderstream_get_cluster) | **GET** /renderstream/clusters/{name} | Get single ClusterPool
[**renderstream_get_render_machine**](RenderstreamApi.md#renderstream_get_render_machine) | **GET** /renderstream/machines/{name} | Get single RenderstreamMachine
[**renderstream_get_workload**](RenderstreamApi.md#renderstream_get_workload) | **GET** /renderstream/workloads/{id} | Get single Workload
[**renderstream_get_workload_instance**](RenderstreamApi.md#renderstream_get_workload_instance) | **GET** /renderstream/workloadinstances/{workloadid}/{instanceindex} | Get single Workload Instance
[**renderstream_list_clusters**](RenderstreamApi.md#renderstream_list_clusters) | **GET** /renderstream/clusters | List all ClusterPools
[**renderstream_list_render_machines**](RenderstreamApi.md#renderstream_list_render_machines) | **GET** /renderstream/machines | List all RS machines (both current render machines and understudies)
[**renderstream_list_workloads**](RenderstreamApi.md#renderstream_list_workloads) | **GET** /renderstream/workloads | List all RS Workloads
[**renderstream_start_workload**](RenderstreamApi.md#renderstream_start_workload) | **POST** /renderstream/workloads/{id}/start | Start a workload
[**renderstream_stop_workload**](RenderstreamApi.md#renderstream_stop_workload) | **POST** /renderstream/workloads/{id}/stop | Stop a workload
[**renderstream_sync_workload**](RenderstreamApi.md#renderstream_sync_workload) | **POST** /renderstream/workloads/{id}/sync | Sync a workload


# **renderstream_failover_render_machine**
> RenderstreamFailoverRenderMachineResponse renderstream_failover_render_machine(name)

Fail over a single RenderstreamMachine, and all its workload instances

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from openapi_client.model.renderstream_failover_render_machine_response import RenderstreamFailoverRenderMachineResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)
    name = "name_example" # str | Name of the render machine to fail over

    # example passing only required values which don't have defaults set
    try:
        # Fail over a single RenderstreamMachine, and all its workload instances
        api_response = api_instance.renderstream_failover_render_machine(name)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_failover_render_machine: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **str**| Name of the render machine to fail over |

### Return type

[**RenderstreamFailoverRenderMachineResponse**](RenderstreamFailoverRenderMachineResponse.md)

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

# **renderstream_failover_render_machine2**
> RenderstreamFailoverRenderMachineResponse renderstream_failover_render_machine2(name)

Fail over a single RenderstreamMachine, and all its workload instances

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from openapi_client.model.renderstream_failover_render_machine_response import RenderstreamFailoverRenderMachineResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)
    name = "name_example" # str | Name of the render machine to fail over

    # example passing only required values which don't have defaults set
    try:
        # Fail over a single RenderstreamMachine, and all its workload instances
        api_response = api_instance.renderstream_failover_render_machine2(name)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_failover_render_machine2: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **str**| Name of the render machine to fail over |

### Return type

[**RenderstreamFailoverRenderMachineResponse**](RenderstreamFailoverRenderMachineResponse.md)

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

# **renderstream_failover_workload_instance**
> RenderstreamFailoverWorkloadInstanceResponse renderstream_failover_workload_instance(workloadid, instanceindex)

Fail over a single workload instance

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from openapi_client.model.renderstream_failover_workload_instance_response import RenderstreamFailoverWorkloadInstanceResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)
    workloadid = "workloadid_example" # str | ID of the workload this instance belongs to
    instanceindex = 1 # int | Index into the Workload's list of IDs

    # example passing only required values which don't have defaults set
    try:
        # Fail over a single workload instance
        api_response = api_instance.renderstream_failover_workload_instance(workloadid, instanceindex)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_failover_workload_instance: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **workloadid** | **str**| ID of the workload this instance belongs to |
 **instanceindex** | **int**| Index into the Workload&#39;s list of IDs |

### Return type

[**RenderstreamFailoverWorkloadInstanceResponse**](RenderstreamFailoverWorkloadInstanceResponse.md)

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

# **renderstream_failover_workload_instance2**
> RenderstreamFailoverWorkloadInstanceResponse renderstream_failover_workload_instance2(workloadid, instanceindex)

Fail over a single workload instance

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from openapi_client.model.renderstream_failover_workload_instance_response import RenderstreamFailoverWorkloadInstanceResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)
    workloadid = "workloadid_example" # str | ID of the workload this instance belongs to
    instanceindex = 1 # int | Index into the Workload's list of IDs

    # example passing only required values which don't have defaults set
    try:
        # Fail over a single workload instance
        api_response = api_instance.renderstream_failover_workload_instance2(workloadid, instanceindex)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_failover_workload_instance2: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **workloadid** | **str**| ID of the workload this instance belongs to |
 **instanceindex** | **int**| Index into the Workload&#39;s list of IDs |

### Return type

[**RenderstreamFailoverWorkloadInstanceResponse**](RenderstreamFailoverWorkloadInstanceResponse.md)

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

# **renderstream_get_cluster**
> RenderstreamGetClusterResponse renderstream_get_cluster(name)

Get single ClusterPool

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from openapi_client.model.renderstream_get_cluster_response import RenderstreamGetClusterResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)
    name = "name_example" # str | 

    # example passing only required values which don't have defaults set
    try:
        # Get single ClusterPool
        api_response = api_instance.renderstream_get_cluster(name)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_get_cluster: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **str**|  |

### Return type

[**RenderstreamGetClusterResponse**](RenderstreamGetClusterResponse.md)

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

# **renderstream_get_render_machine**
> RenderstreamGetRenderMachineResponse renderstream_get_render_machine(name)

Get single RenderstreamMachine

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from openapi_client.model.renderstream_get_render_machine_response import RenderstreamGetRenderMachineResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)
    name = "name_example" # str | 

    # example passing only required values which don't have defaults set
    try:
        # Get single RenderstreamMachine
        api_response = api_instance.renderstream_get_render_machine(name)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_get_render_machine: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **str**|  |

### Return type

[**RenderstreamGetRenderMachineResponse**](RenderstreamGetRenderMachineResponse.md)

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

# **renderstream_get_workload**
> RenderstreamGetWorkloadResponse renderstream_get_workload(id)

Get single Workload

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from openapi_client.model.renderstream_get_workload_response import RenderstreamGetWorkloadResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)
    id = "id_example" # str | 

    # example passing only required values which don't have defaults set
    try:
        # Get single Workload
        api_response = api_instance.renderstream_get_workload(id)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_get_workload: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**|  |

### Return type

[**RenderstreamGetWorkloadResponse**](RenderstreamGetWorkloadResponse.md)

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

# **renderstream_get_workload_instance**
> RenderstreamGetWorkloadInstanceResponse renderstream_get_workload_instance(workloadid, instanceindex)

Get single Workload Instance

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from openapi_client.model.renderstream_get_workload_instance_response import RenderstreamGetWorkloadInstanceResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)
    workloadid = "workloadid_example" # str | ID of the workload this instance belongs to
    instanceindex = 1 # int | Index into the Workload's list of IDs

    # example passing only required values which don't have defaults set
    try:
        # Get single Workload Instance
        api_response = api_instance.renderstream_get_workload_instance(workloadid, instanceindex)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_get_workload_instance: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **workloadid** | **str**| ID of the workload this instance belongs to |
 **instanceindex** | **int**| Index into the Workload&#39;s list of IDs |

### Return type

[**RenderstreamGetWorkloadInstanceResponse**](RenderstreamGetWorkloadInstanceResponse.md)

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

# **renderstream_list_clusters**
> RenderstreamListClustersResponse renderstream_list_clusters()

List all ClusterPools

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from openapi_client.model.renderstream_list_clusters_response import RenderstreamListClustersResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # List all ClusterPools
        api_response = api_instance.renderstream_list_clusters()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_list_clusters: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**RenderstreamListClustersResponse**](RenderstreamListClustersResponse.md)

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

# **renderstream_list_render_machines**
> RenderstreamListRenderMachinesResponse renderstream_list_render_machines()

List all RS machines (both current render machines and understudies)

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from openapi_client.model.renderstream_list_render_machines_response import RenderstreamListRenderMachinesResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # List all RS machines (both current render machines and understudies)
        api_response = api_instance.renderstream_list_render_machines()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_list_render_machines: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**RenderstreamListRenderMachinesResponse**](RenderstreamListRenderMachinesResponse.md)

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

# **renderstream_list_workloads**
> RenderstreamListWorkloadsResponse renderstream_list_workloads()

List all RS Workloads

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from openapi_client.model.renderstream_list_workloads_response import RenderstreamListWorkloadsResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # List all RS Workloads
        api_response = api_instance.renderstream_list_workloads()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_list_workloads: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**RenderstreamListWorkloadsResponse**](RenderstreamListWorkloadsResponse.md)

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

# **renderstream_start_workload**
> bool, date, datetime, dict, float, int, list, str, none_type renderstream_start_workload(id)

Start a workload

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)
    id = "id_example" # str | 

    # example passing only required values which don't have defaults set
    try:
        # Start a workload
        api_response = api_instance.renderstream_start_workload(id)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_start_workload: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**|  |

### Return type

**bool, date, datetime, dict, float, int, list, str, none_type**

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

# **renderstream_stop_workload**
> bool, date, datetime, dict, float, int, list, str, none_type renderstream_stop_workload(id)

Stop a workload

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)
    id = "id_example" # str | 

    # example passing only required values which don't have defaults set
    try:
        # Stop a workload
        api_response = api_instance.renderstream_stop_workload(id)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_stop_workload: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**|  |

### Return type

**bool, date, datetime, dict, float, int, list, str, none_type**

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

# **renderstream_sync_workload**
> bool, date, datetime, dict, float, int, list, str, none_type renderstream_sync_workload(id)

Sync a workload

### Example


```python
import time
import openapi_client
from openapi_client.api import renderstream_api
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = renderstream_api.RenderstreamApi(api_client)
    id = "id_example" # str | 

    # example passing only required values which don't have defaults set
    try:
        # Sync a workload
        api_response = api_instance.renderstream_sync_workload(id)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling RenderstreamApi->renderstream_sync_workload: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**|  |

### Return type

**bool, date, datetime, dict, float, int, list, str, none_type**

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


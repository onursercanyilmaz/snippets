import axios from 'axios';
import { useEffect, useState } from 'react';

export default function usePost() {
  const [data, setData] = useState<any>(null);
  const [loading, setLoading] = useState<boolean>(false);
  const [error, setError] = useState<any>(null);

  const post = async (url: any, requestData: any) => {
    setLoading(true);
    await axios
      .post(url, {
        username: requestData.username,
        password: requestData.password,
      })

      .then(res => {
        setData(res.data);
        setError(null);
      })
      .catch(err => {
        setData(null);
        setError(err);
      })
      .finally(() => {
        setLoading(false);
      });
  };

  return { data, loading, error, post };
}

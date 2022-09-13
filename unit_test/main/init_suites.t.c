/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_suites.t.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:22:13 by yoav              #+#    #+#             */
/*   Updated: 2022/09/13 09:54:24 by yoav             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

CU_SuiteInfo g_suites[] = 
{
	{
		"token",
		init_suite,
		clean_suite,
		NULL,
		NULL,
		g_token_tests,
	},
	{
		"dll",
		init_suite,
		clean_suite,
		NULL,
		NULL,
		g_dll_tests,
	},
	CU_SUITE_INFO_NULL,
};
